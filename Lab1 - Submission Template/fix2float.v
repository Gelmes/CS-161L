`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:48 01/23/2017 
// Design Name: 
// Module Name:    fix2float 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fix2float(
    input  wire [31:0] fixn,
    input  wire [4:0] fixposition,
	 input  wire clk,
    output reg [31:0] floatn
    );

reg [31:0] tn; //Temporary number register
reg [5:0] msbpos; //Most significant bit position
reg [7:0] exp; //Exponent register

//combinational
always @(*) begin
	if (fixn[31] == 1) begin
		tn = (fixn ^ 'hffffffff) + 1;//Gets 2's compliment
	end else begin
		tn = fixn;	
	end
	
	//Find leading 1
	msbpos = 31;
	//$display  ("tn start: %b", tn);
	while (tn[msbpos] != 1) begin
		//$display  ("tn      : %b", tn);
		msbpos = msbpos - 1;
	end
	
	//Shift value to mantessas possition
	tn = tn << 23 - msbpos;
	exp = 127 + msbpos - fixposition;
	tn[31] = fixn[31]; //Save the sign 
	tn[30-:8] = exp;   //Save the exponent
	floatn = tn;
end

/*Sequential 
always @(posedge clk) begin
	floatn <= tn;
end
*/

endmodule
