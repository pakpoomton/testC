#include <stdio.h>
 // this program demonstrates a mistake of finding array size in subfunction
#define dprint(expr) printf(#expr " = %g\n", expr)
void findArraySize(int v[]);
 
 main()
 {
	int num_array[] = {5, -1, 7, 9, 2, 8, 15, 3, 6, 0, 11, 4};
	
	printf("main array size: %d\n", sizeof(num_array)/sizeof(int));
	findArraySize(num_array);
	
	int N = sizeof(num_array)/sizeof(int);
	dprint(N);
	return 0;
	
 }
 //arrayPrint: print out an integer arrayPrint
void findArraySize(int v[])
{
	printf("subfunction array size: %d\n", sizeof(v)/sizeof(int));
}