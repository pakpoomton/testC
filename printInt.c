#include <stdio.h>
// this program print integer as character.. as a demo for recursion function
#define TEST_NUM 123
void printInteger(int n);
int main()
{
    int test_num = TEST_NUM;
    printInteger(test_num);
	return 0;
}

// this function print n in decimal
void printInteger(int n)
{
	if (n < 0){ // if the integer is negative, print a negative sign, turn it to plus an continue with printing
		putchar('-');
		n = -n;
	}
	if (n / 10){ //when n is larger than 10
		printInteger(n/10);	 //pass on all digit except for the least significant digit to the itself
	}
	putchar(n % 10 + '0'); //print the least significant digit
}
