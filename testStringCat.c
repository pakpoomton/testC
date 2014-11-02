#include <stdio.h>

#define MAXLINE 1000 /*maximum input line size, set aside storage*/
char string1[MAXLINE*2]; // current input line, 
char string2[MAXLINE]; // current input line, 

int getLine(char stringi[]);
int strcatN(char s[], char t[]);
int exitChar; 

int main()
{
    exitChar = 5;
    while (exitChar > 2)
	{
	printf("Please insert first string: ");
	getLine(string1);
	
	printf("please insert the second string: ");
	getLine(string2);
	
	printf("Concatenate string is: ");
	exitChar = strcatN(string1, string2);
	printf(string1);
	printf("\n");
	
	}
	return 0;
}

int getLine(char stringi[])
{
	int c, i;
	for(i=0; i<MAXLINE-1
	  && (c=getchar())!=EOF && c!='\n';++i)
	{
		stringi[i] = c;
    }	
	if (c == '\n')
	{
	    stringi[i] = c;
		++i;
	}
    stringi[i] = '\0'; // use this to mark the end of line.
	return i; // EOF input, for loop terminate at i =0, by returning i=0
	          //main function while loop stop. 
	
}

int strcatN(char s[], char t[])
{
	int i, j;
	i = j = 0;
	while (s[i] != '\n'){ //fine the end of s 
		i++;
	}
	while ((s[i++] = t[j++]) != '\0'){ //copy t
	   ;
	}
	return i;
}