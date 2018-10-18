/*
	Name: diceroll.h
	Copyright: 
	Author: Rookie
	Date: 18/10/18 16:58
	Description: 1. Take the 
					random number modulus 6. It produces an integer 
					in the range 0 through 5.
					
				 2. Add 1. The new number is in the range 1 through 6.
				 
				 3. To generalize, just replace the number 6 in step 1 
				 	by the number of sides.
*/

extern int roll_count;

int roll_n_dice(int dice, int sides);
