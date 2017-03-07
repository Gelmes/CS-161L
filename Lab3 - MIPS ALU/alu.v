`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Marco Rubio
// 
// Create Date:    19:40:04 01/09/2017 
// Design Name: my_alu
// Module Name:    alu 
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
module my_alu # (parameter NUMBITS =32)
(
input wire clk,
input wire reset,
input wire[NUMBITS-1:0] A, B,
input wire[2:0] opcode,

output reg [NUMBITS-1: 0] result,
output reg [NUMBITS-1:0] R,
output reg carryout,
output reg overflow,
output reg zero
);

//Combinational Block
reg [NUMBITS-1:0] c_result;
always @(*) begin 
	c_result = 'd0 ;
	case (opcode)
		3'd0 : c_result = A + B;
		3'd2 : c_result = A - B;
		3'd1 : c_result = $signed(A) + $signed(B);
		3'd3 : c_result = $signed(A) - $signed(B);
		3'd4 : c_result = A & B;
		3'd5 : c_result = A | B;
		3'd6 : c_result = A ^ B;
		3'd7 : c_result = (A >> 1);
	endcase
end


//Sequential Block
always @(posedge clk) begin
	if( reset == 1'b1) begin
		result <= 'd0;
		zero <= 'd0;
		carryout <= 'd0;
		overflow <= 'd0;
	end else begin
		result <= c_result;
		zero <= (c_result == {NUMBITS{1'b0}}) ? 'b1 : 1'b0;	
		case(opcode)
			3'd0 : carryout <= (c_result < A) ? 'b1 : 1'b0;
			3'd2 : carryout <= (c_result > A) ? 'b1 : 1'b0;
			3'd1 : begin if(A[NUMBITS-1] == B[NUMBITS-1]) begin 
					overflow <= (A[NUMBITS-1] == c_result[NUMBITS-1]) ? 1'b0 : 'b1;
				end
			end
			3'd3 : begin if(A[NUMBITS-1] != B[NUMBITS-1]) begin 
					overflow <= (A[NUMBITS-1] == c_result[NUMBITS-1]) ? 1'b0 : 'b1;
				end
			end
			default : begin carryout <= 'b0; overflow <= 'b0; end
		endcase
	end
end


//assign carryout = result[NUMBITS-1];
//assign zero = (result == {NUMBITS{1'b0}}) ? 1'b1 : 1'b0;

endmodule
