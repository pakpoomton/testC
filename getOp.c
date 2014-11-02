#include <ctype.h>
#include <stdio.h>
#define NUMBER '0' //signal that number was found ?? why do we have to
   //define this again??


int getch(void);
void ungetch(int);

/*getOp: get next operator or numeric operand*/
int getOp(char s[])
{
	int i, c;
	
	//reading into s[0] & skip empty space 
	while ((s[0] = c = getch()) == ' ' || c == '\t'){
	; } 
	
	//read operator
	if (!isdigit(c) && c != '.'){
		return c; //not digit.. probably operator, just pass it up directly
	}
	s[1] = '\0'; // ending term symbol
	
	//read operand (number) should could have more than one character into char array, s
	//note that we have to split to two for loop because '.' is not a digit so we cannot just
	//use one while loop to read all digit into s.
	i = 0;
	if (isdigit(c)) // collect integer part
	{
		while (isdigit(s[++i] = c = getch())) {
		;}
	}
	if (c == '.') // collect fraction part
	{
		while (isdigit(s[++i] = c = getch())) {
		;}
	}
	s[i] = '\0';
	
	
	if (c != EOF) {
		ungetch(c);
	}
	return NUMBER;
}
