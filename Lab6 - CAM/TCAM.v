`timescale 1ns / 1ps

module TCAM(
	input clk,
	input rst,
	input in,      //Previous Cell match out
	input search,
	input dc,      //Don't Care
	input we,      //Write Enable
	output reg out //Match Out
 );
reg ff = 1'b0;    //Internal Flip Flop

always @(*) begin
	if(rst) begin
		out = 1'b0;
		ff = 1'b0;
	end else begin
		//$display("WE: %d", we); 
		if (we == 1'b1) begin
			ff = search;
		end		
		//If Don't Care output "doesnt matter"
		if (dc == 1'b1) begin
			out = 1'b1;
		end else if(in == 1'b1) begin
			out = (ff == search)? 1'b1:1'b0; 
		end else begin
			out = 1'b0;
		end
	end
end

endmodule
