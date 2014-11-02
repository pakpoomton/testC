#include <stdio.h>

/*This is a simple interactive program*/

main()
{
	int c;
    printf("hello world! \n");
	printf("press enter to exit \n");
	c = getchar();
	while(c != '\n'){
		c = getchar();
	}
}