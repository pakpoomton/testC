#include <stdio.h>

/*count digits, white space, others */
main()
{
	int c, i, nwhite, nother;
	int ndigit[10];
	
	//set initial value of variable and array element to 0
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i){
		ndigit[i] = 0;
	}
	
	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9'){
			++ndigit[c-'0'];
			/* note that we do arithematic with char as number.
			*/
		}
		else if (c == ' ' || c == '\n' || c == '\t'){
			++nwhite;
		}
		else {
			++nother;
		}

	}
	printf("digits =");
	for (i = 0; i < 10; ++i){
		printf("%d", ndigit[i]);
	}	
	printf(", white space = %d, other = %d\n", nwhite, nother);	
}