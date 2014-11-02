#include <stdio.h>
//This program demonstrates how bit operation works 
int main()
{
    int A, B, C, D, E;
	A = 7;
	B = A <<2; // shift bit to left by two bit which is ~ x4
	C = A & 15; // 01111
    D = A & 16; // 10000
    E = A & 17;	// 10001 
	//getbits(A, 4, 3);
	
	printf("input number: %d", A);
	printf("\n");
	printf("left shift number: %d", B);
    printf("\n");
	printf("AND number: %d %d %d", C, D, E);
	return 0;
}

int getbits(int x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}