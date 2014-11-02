#include <stdio.h>
#define MAXVAL 100 //max depth of val stack

//external variable shared by push and pop but not main
//note that these two variables are kept throughout the time the the program run
int sp = 0; // next free stack position
double val[MAXVAL]; // value stack


/*push: push f onto value stack*/
void push(double f)
{
	if(sp < MAXVAL){
		val[sp++] = f;
	}
	else
		printf("error: stack full, can't push %g\n", f);
}

/*pop: pop and return top value from stack*/
double pop(void)
{
	if (sp >0){
		return val[--sp];}
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}