#include <stdio.h>
#include <conio.h>

void main()
{
	float c,f;
	printf("Enter temperature in fahrenheit: ");
	scanf("%f",&f);
	c=0.56*(f-32);
	printf("Given temperature in celsius is: %f",c);
	getch();
}