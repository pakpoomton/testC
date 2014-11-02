#include <stdio.h>
#define MAXLINE 1000 //max input length
//**need to compile with getLine.c and strindex.c
int getLine(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "able"; //pattern to search for

/*find all lines matching pattern*/
main()
{
	char line[MAXLINE];
	int found = 0;
	
	while (getLine(line, MAXLINE)>0) // loop when there is more line coming
	{
		if (strindex(line, pattern) >= 0)
		{
			printf("%s", line);
			found++;
		}
	}
	return found;
} 



