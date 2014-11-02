#include <stdio.h>
#define MAXLINE 100
//basic adder keep adding input line
//need to compile with getLine.c and atofN.c
main()
{
    //**note that we declare function output too.
	//if you forget to declare atofN, you will get wrong result
	//in a strang way.. i.e. output from atofN below becomes 0
	double sum, atofN(char []);
	char line[MAXLINE];
	int getLine(char line[], int max);
	
	sum = 0;
	while (getLine(line, MAXLINE)>0){
		printf("\t%g\n", sum += atofN(line));
	}
	return 0;
	
}