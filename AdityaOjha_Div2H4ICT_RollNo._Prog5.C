#include <stdio.h>
#include <conio.h>

void main()
{
	float a,b,c;
	printf("Enter first number: ");
	scanf("%2f",&a);
	printf("Enter second number: ");
	scanf("%2f",&b);
	c=a+b;
	printf("The sum of the numbers is: %2f\n",c);
	c=a-b;
	printf("The difference of the numbers is: %2f\n",c);
	c=a*b;
	printf("The product of the numbers is: %2f\n",c);
	c=a/b;
	printf("The quotient of the numbers is: %2f\n",c);
	getch();
}

