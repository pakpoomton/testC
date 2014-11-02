#include <stdio.h>
/* print Fahrenheit-Celsius table 
  for fahr = 0, 20, ... 300 */
main()
{
	//int fahr, celsius; // using int causes round up problem
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /*lower limit of temperature */
	upper = 300; /*upper limit*/
	step = 20; /*step size*/
	
	fahr = lower;
	while (fahr <= upper) {
	    celsius = 5*(fahr-32)/9;
		//this print is not right justified
		//printf("%d\t%d\n", fahr, celsius);
		
		//this print is right justify
		//printf("%3d %6d\n", fahr, celsius); //for int version
		printf("%3.0f %6.1f\n", fahr, celsius); //for float version
		fahr = fahr + step;
	}
}