#include <stdio.h>
#include <conio.h>

void main()
{
	float rupees,dollars;
	printf("Enter rupees: ");
	scanf("%2f",&rupees);
	dollars=rupees/48;
	printf("Given rupees in dollars is: %2f",dollars);
	getch();
}

