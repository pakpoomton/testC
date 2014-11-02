#include <stdio.h>

#define MAXLINE 1000 /*maximum input line size, set aside storage*/

int max; // max line length so far
char line[MAXLINE]; // current input line, 
char longest[MAXLINE]; // longest line saved
	
int getLine(void);
void copy(void);

/*print longest input line, with external variable*/
main()
{
	int len; // current line length
    extern int max; //declare external variable*/
    extern char longest[];	

	max = 0;
	while((len = getLine()) > 0) // len > 0 means there is more lines coming 
	{
		if (len > max) // when new line is longer than current, update max length and max line
		{
			max = len;
			copy();
		}
	}
	if (max > 0) // there was a line
	{
		printf("%s", longest);
	}
	return 0;
}

/*getline: read input into a line and update max line max length*/
int getLine(void)
{
	int c, i;
    extern char line[];	
	for (i=0; i<MAXLINE-1 
	     && (c=getchar())!=EOF && c!='\n'; ++i)
	//iterate through each character till either one of these happens
	//1. reach max length, 2. end of file, 3. end of line
	{
		line[i] = c; //out each read character into the array
	}
	if (c == '\n')
	{
	    line[i] = c;
		++i;
	}
	line[i] = '\0'; // use this to mark the end of line.
	return i; // EOF input, for loop terminate at i =0, by returning i=0
	          //main function while loop stop. 
}

/*copy from one string to the other assuming the size is within limit*/
void copy(void)
{
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0')
	{
		++i;
	}
}