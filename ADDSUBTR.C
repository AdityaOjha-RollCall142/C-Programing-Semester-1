#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	c=a+b;
	printf("The sum of the numbers is: %d\n",c);
	c=a-b;
	printf("The difference of the numbers is: %d\n",c);
	c=a*b;
	printf("The product of the numbers is: %d\n",c);
	c=a/b;
	printf("The quotient of the numbers is: %d\n",c);
	getch();
}