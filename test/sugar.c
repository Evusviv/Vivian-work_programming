#include <stdio.h>

int main()
{
	int radius; //The distance from outside to the circle
	printf("please enter the radius of a cirle: ");
	scanf("%i" , &radius); //adress-of operator

	double area = 3.14159 * (radius * radius);
	printf("The area of circle with %i radius is %f\n", radius, area);
	return 0;
}
