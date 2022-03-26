#include <stdio.h>
/**
 * main - A program for a chicken company that tells how many dozen of eggs they produced in a day
 * A dozen is 12 
 */
int main()
{
 	printf("The number of eggs for the day: ");
	int eggs;
	scanf("%i" , &eggs);

	double dozen = (double) eggs / 12;
	printf("you have %f dozen eggs. \n", dozen);
	return 0;
}
