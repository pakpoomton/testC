#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size, set aside storage*/

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*print longest input line*/
main()
{
	int len; // current line length
	int max; // max line length so far
	char line[MAXLINE]; // current input line, 
	char longest[MAXLINE]; // longest line saved
	
	max = 0;
	while((len = getLine(line, MAXLINE)) > 0) // len > 0 means there is more lines coming 
	{
		if (len > max) // when new line is longer than current, update max length and max line
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) // there was a line
	{
		printf("%s", longest);
	}
	return 0;
}

/*getline: read a line into s, return length*/
int getLine(char s[], int lim)
{
	int c, i;
	
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	//iterate through each character till either one of these happens
	//1. reach max length, 2. end of file, 3. end of line
	{
		s[i] = c; //out each read character into the array
	}
	if (c == '\n')
	{
	    s[i] = c;
		++i;
	}
	s[i] = '\0'; // use this to mark the end of line.
	return i;
}

/*copy from one string to the other assuming the size is within limit*/
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}