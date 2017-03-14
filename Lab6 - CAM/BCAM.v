`timescale 1ns / 1ps

module BCAM(
	input clk,
	input rst,
	input in,  //Previous Cell match out
	input search,
	input we, //Write Enable
	output reg out //Match Out
    );
reg ff = 1'b0; //Internal Flip Flop

always @(posedge clk) begin
	if(~rst) begin
		out <= 1'b0;
	end else begin
		if (we) begin
			ff <= search;
		end		
		out <= (ff == search)? 1'b1:1'b0; 
	end
end

endmodule
