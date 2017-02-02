`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:15:27 01/23/2017 
// Design Name: 
// Module Name:    float2fix 
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
module float2fix(
	input wire [31:0] floatn,
	input wire [4:0] fixposition,
	input wire clk,
	output reg [31:0] fixn
    );

reg [23:0] tm;
reg [31:0] tmsign;
reg [8:0] texp;
reg tsign;


//Combinational
always @(*) begin
	texp = floatn[30-:8] - 'd127;
	tm = {1'b1, floatn[0+:23]}; //Concatinate 1 + mantissa
	tsign = floatn[31];
	if(tsign == 'b1) begin
		tm = (tm ^ 'hfffffffff)  + 1;
		tmsign = 'hffffffff << 9 + texp + fixposition;
		//$display  ("MEOW");
	end else begin
		tmsign = 0;
	end
	tm = tm >> (23 - texp - fixposition);
	tm = tm ^ tmsign;
	fixn = tm;
end

/*Sequential
always @(posedge clk) begin
	fixn <= tm;
end
*/

endmodule
