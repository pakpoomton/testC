#include <stdio.h>
#define BUFSIZE 100

char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0; // next free position in buf

int getch(void) // get a (possibly pushed back) character
{
	return (bufp > 0) ? buf[--bufp] : getchar(); 
	//if there is something in buf, use that to return to getch, if not just read a new character.
}

void ungetch(int c) // push character back on input
{
	if (bufp >= BUFSIZE){
		printf("ungetch: too many characters \n"); // report that buf size is exceeded
	}
	else {
		buf[bufp++] = c; // store c, the character we just read into buf
	}
}
