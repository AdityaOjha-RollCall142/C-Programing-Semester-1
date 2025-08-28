#include <stdio.h>
#include <conio.h>

void main()
{
	float a,b,c;
	printf("Enter first number: ");
	scanf("%2f",&a);
	printf("Enter second number: ");
	scanf("%2f",&b);
	c=a-b;
	printf("The difference of two numbers is: %2f",c);
	getch();
}

