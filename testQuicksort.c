#include <stdio.h>
 // this program does quick sort ... as a demo for recursion function
void qsort2(int v[], int left, int right);
void arrayPrint(int v[], int N);
 
 main()
 {
	int num_array[] = {5, -1, 7, 9, 2, 8, 15, 3, 6, 0, 11, 4};
	int N = sizeof(num_array)/sizeof(int);
	printf("array size: %d \n", N);
	arrayPrint(num_array, N);
	qsort2(num_array, 0, N-1);
	arrayPrint(num_array, N);
	return 0;
	
 }
 
 //this function sor v[left]...v[right] into increasing order
 void qsort2(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
	
	if(left >= right){ //do nothing if there is less than two number left to be sorted
		return;}
	swap(v, left, (left+right)/2); //move partition element (middle number) to v[0]
	last = left;
	for (i = left+1; i <=right; i++) // partition
	{
		if (v[i] < v[left]){
			swap(v, ++last, i);
		}
	}
	swap(v, left, last); //restore partition
	qsort2(v, left, last-1); //recursion to left and right half
	qsort2(v, last+1, right);
}

//swap: interchange v[i] and v[j]
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

//arrayPrint: print out an integer arrayPrint
void arrayPrint(int v[], int N)
{
	int arraySize; 
	int i;

	for(i=0; i<N; i++)
	{
		printf("%d ", v[i]);
	}
	
	printf("\n");
}
 