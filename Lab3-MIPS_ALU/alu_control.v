`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:37:57 02/06/2017 
// Design Name: 
// Module Name:    control 
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
module alu_control(
 input wire [1:0] alu_op ,
 input wire [5:0] instruction_5_0 ,
 output reg [3:0] alu_out
);
	 
//Combinational Logic
always @(*) begin
	case(alu_op) 
		2'b00: begin
			alu_out = 4'b0010;
			end
		2'b01: begin
			alu_out = 4'b0110;
			end
		2'b10, 2'b11: begin
			case (instruction_5_0) 
				6'b000000: alu_out = 6'b0010;
				6'b000010: alu_out = 6'b0110;
				6'b000100: alu_out = 6'b0000;
				6'b000101: alu_out = 6'b0001;
				6'b001010: alu_out = 6'b0111;
			endcase
			end
		default: begin
			alu_out = 6'b0000;
			end
	endcase
end


endmodule
