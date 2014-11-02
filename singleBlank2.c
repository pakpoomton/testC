#include <stdio.h>

/* copy input to output, replacing
each string of one or more blank by
a single blank*/

main (){
    int c, blankCount;
	c = getchar();
	blankCount = 0;
	while (c != EOF){
		if (c == ' '){
			++blankCount;
		}
		else {
			blankCount = 0;
		}
		
		if (blankCount < 2){
			putchar(c);
		}
		
		c = getchar();
	}	
}