#include <stdio.h>

#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

/*count total number of lines, words and characters in input*/
main()
{
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF){
		++nc; //add one more char count as we go through the loop.
		if (c == '\n'){
			++nl; //add one more line when see new line symbol
		}
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			/* when encounter a space, newline or tab,
			note that we get outside of a word.
			*/
		}
		else if (state == OUT) {
			state = IN;
			++nw;
			/*
			at the transition from space, newline or
			tab to normal character, count as a word.
			*/
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}