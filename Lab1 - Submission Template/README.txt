Lab 5 README
==========================================================

LEADER
mrubi005@ucr.edu

MEMBERS
==========================================================
mrubi005@ucr.edu

REMARKS
- For this lab we continued work on the datapath and added the registers that would help achieve a multicycle pipeline. The generic register file hold the data of each cycle. This data is passed on from one cycle to another. 
- The correct aproach to completing this project would have been to create modules for each cycle e.g. (id, if,ex,mem,wr)
- Because of lack of time all the code was writen to a single file. With more time the correct implementation would have been achived.
- The signals looks like the provided waveform except that mine runs at an earlier PC cycle.
==========================================================

BUGS IF ANY 
- During runtime I get two warning stating that some ports are not of equal width. This can be corrected by carefully adjusting the width of the signal lines, maybe adding some registers.



==========================================================

ORIGINAL WORK STATEMENT
- I certify that this submission represents my own original work. This submission was not done in collaboration nor was any substanial portion of the code obtained from third parties, including websites and the like.
