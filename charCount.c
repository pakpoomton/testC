#include <stdio.h>

/* count characters in inputs; */
main()
{
	long nc;
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}