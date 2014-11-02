#include <stdio.h>
// return index of t in s, -1 if not finding anything
int strindex(char s[], char t[])
{
	int i, j, k;
	for (i=0; s[i] != '\0'; i++) //scan till the end of s
	{
		for (j=i, k=0; t[k]!='\0' 
		   && s[j]==t[k]; j++, k++)
		   { //check character by character starting from position i
		   ;
		   }
		if (k>0 && t[k] == '\0')
        {
		return i;
        }   		
	}
	return -1;
}