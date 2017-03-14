`timescale 1ns / 1ps

module CAM_row(clk, rst, 
					we_decoded_row_address, 
					search_word, 
					dont_care_mask, 
					decoded_match_address
	);
	
	parameter width = 32;
	
	input clk;
	input rst;
	input we_decoded_row_address;
	input [width-1:0] search_word;
	input [width-1:0] dont_care_mask;
	output decoded_match_address;

	//Generate CAM's
	wire [width:0] match;
	genvar i;
	assign match[0] = 1'b1;
	generate
		for(i=0; i < width; i = i+1) begin : block
			TCAM U (clk, rst, 
						match[i], 
						search_word[i],
						dont_care_mask[i], 
						we_decoded_row_address, 
						match[i+1]);
		end
	endgenerate

	assign decoded_match_address = match[width];

endmodule
