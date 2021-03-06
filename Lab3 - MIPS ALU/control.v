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
module control(
 input wire [5:0] instr_op ,
 output reg reg_dst ,
 output reg branch ,
 output reg mem_read ,
 output reg mem_to_reg ,
 output reg [1:0] alu_op ,
 output reg mem_write ,
 output reg alu_src ,
 output reg reg_write 	
);
	 
//Combinational Logic
always @(*) begin
	case(instr_op) 
		6'b000000: begin
			reg_dst = 1;
			alu_src = 0;
			mem_to_reg = 0;
			reg_write = 1;
			mem_read = 0;
			mem_write = 0;
			branch = 0;
			alu_op = 2'b10;
			end
		6'b100011: begin
			reg_dst = 0;
			alu_src = 1;
			mem_to_reg = 1;
			reg_write = 1;
			mem_read = 1;
			mem_write = 0;
			branch = 0;
			alu_op = 2'b00;
			end
		6'b101011: begin
			reg_dst = 1;
			alu_src = 1;
			mem_to_reg = 1;
			reg_write = 0;
			mem_read = 0;
			mem_write = 1;
			branch = 0;
			alu_op = 2'b00;
			end
		6'b000100: begin
			reg_dst = 1;
			alu_src = 0;
			mem_to_reg = 1;
			reg_write = 0;
			mem_read = 0;
			mem_write = 0;
			branch = 1;
			alu_op = 2'b01;
			end
		default: begin
			reg_dst = 0;
			alu_src = 0;
			mem_to_reg = 0;
			reg_write = 0;
			mem_read = 0;
			mem_write = 0;
			branch = 0;
			alu_op = 2'b00;
			end
	endcase
end


endmodule
