`timescale 1ns / 1ps

module CAM_Array(clk, rst,
	we_decoded_row_address,
	search_word,
	dont_care_mask,
	decoded_match_address
	);
	
	parameter depth = 32;
	parameter width = 32;
	
	input clk;
	input rst;
	input [depth-1:0] we_decoded_row_address;
	input [width-1:0] search_word;
	input [width-1:0] dont_care_mask;
	output [depth-1:0] decoded_match_address;

	//Generate CAM's
	genvar i;
	generate
		for(i=0; i < depth; i = i+1) begin : block
			CAM_row #(width) U (
										clk, rst, 
										we_decoded_row_address[i], 
										search_word, 
										dont_care_mask,
										decoded_match_address[i]
										);
		end
	endgenerate

endmodule
