#include <stdio.h>
#include <conio.h>

void main()
{
	int rupees,dollars;
	printf("Enter rupees: ");
	scanf("%d",&rupees);
	dollars=rupees/48;
	printf("Given rupees in dollars is: %d",dollars);
	getch();
}
