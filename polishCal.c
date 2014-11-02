#include <stdio.h>
#include <stdlib.h> //for atof()

#define MAXOP 100 //max size of operand
#define NUMBER '0' //signal that number was found

int getop(char []);
void push(double);
double pop(void);

/*reverse Polish calculator*/
/*to be compiled with pushPop.c, getOp.c and getchUG.c*/
main()
{
	int type;
	double op2;
	char s[MAXOP];
	
	while((type = getOp(s)) != EOF) 
	//keep getting next get operator or operand till we get EOF signal
	{
		switch (type)
		{
			case NUMBER: // get operand, read & push it in the stack
				push(atof(s));
				break;
			case '+': //get plus, add the last two items and push back
				push(pop()+pop());
				break;
			case '*': //get x, multiple the last two item and push back.
				push(pop()*pop());
				break;
			case '-': // (same idea as above)
				op2 = pop();
				push(pop()-op2);
				break;
			case '/': // (same idea as above)
				op2 = pop();
				if (op2 != 0.0){
					push(pop()/op2);}
				else {
					printf("error: zero divisor\n");}
				break;
			case '\n': // end of line, equation is ended, print out result
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
				
		}
	}
	return 0;
}
