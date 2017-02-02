`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date:    19:02:32 01/30/2017 
// Module Name:    lab02 
// Description: 
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////	
module lab02(
    input wire clk,
    input wire rst,
    input wire [31:0] targetnumber,
    input wire [4:0] fixpointpos,
    input wire opcode,
    output reg [31:0] result
    );
	
	wire [31:0] float; //Result from fixed to float conversion
	wire [31:0] fixed; //Result from float to fixed conversion
	
	fix2float fx2flt (.fixn(targetnumber), .fixposition(fixpointpos), .floatn(float));
	float2fix flt2fx (.floatn(targetnumber), .fixposition(fixpointpos), .fixn(fixed));
	
	always @ (posedge clk) begin
		if (rst == 1'b1) begin
			result <= 'b0;
		end else begin 
			case (opcode)
				1'b0: result <= float;
				1'b1: result <= fixed;
				default: result <= 0;
			endcase
		end
	end
	

endmodule
