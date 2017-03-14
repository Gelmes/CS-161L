
module STCAM(
	input clk,
	input rst,
	input in,      //Previous Cell match out
	input search,
	input dc,      //Don't Care
	input we,      //Write Enable
	output reg out //Match Out
    );
reg ff = 1'b0;    //Internal Flip Flop
reg ffdc = 1'b0;  //Don't Care Internal Flip Flop

always @(posedge clk) begin
	if(~rst) begin
		out <= 1'b0;
		ff <= 1'b0;
		ffdc <= 1'b0;
	end else begin
		if (we) begin
			ff <= search;
			ffdv <= dc;
		end		
		//If Don't Care output "doesnt matter"
		if (ffdc) begin
			out <= 1'b1;
		end else begin
			out <= (ff == search)? 1'b1:1'b0; 
		end
	end
end

endmodule
