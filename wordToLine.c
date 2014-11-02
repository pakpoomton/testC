#include <stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

/*count total number of lines, words and characters in input*/
// EXERCISE 1-12 from Kernighan & Ritchie
main()
{
    int c, blankCount;
	c = getchar();
	blankCount = 0;
	while (c != EOF){
		if (c == ' ' || c == '\t'){
			++blankCount; //add number of contiguous blank by one, if c in blank or tab
		}
		else {
			blankCount = 0; //reset number of contiguous blank to zero, if c in not blank or tab
		}
		
		if (blankCount == 0){
			putchar(c); //print as normal if we have normal character. 
		}
		else if(blankCount == 1){
			printf("\n"); // for the first blank or tab, go to new line. 
		}
		
		
		c = getchar();
	}	
}