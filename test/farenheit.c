#include <stdio.h>
/* Converting Fahrenheit to celcius
 * March 31. 2022
 */
int main(void)
{
	int fahrenheit, celsius;
	printf("please enter fahrenheit as an int: ");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32)/1.8;  //conversion
	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
	return 0;

}

