#include <ctype.h>
#include <stdio.h>
//atofN: convert string s to double
double atofN(char s[])
{
	double val, power;
	int i, sign;
	
	for(i=0; isspace(s[i]); i++){ // skip white space
	;}
	sign = (s[i] == '-') ? -1 : 1; //ternary operation
	// sign = X ? -1: 1 is equivalent to 
	// sign = -1 if X is true
	// sign = 1 if X if false
	//here is basically say that if the first
	//character is '-' then sign is negative
	if (s[i] == '+' || s[i] == '-'){
		i++;} //move to the next if first char is a sign symbol
	for (val = 0.0; isdigit(s[i]); i++)	
	{
		val = 10.0 * val + (s[i] - '0');
	} // above decimal
	if (s[i] == '.'){
		i++;} // move over a decimal
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}// below decimal
	return sign*val/power;
}