#include <stdio.h>
#include <conio.h>

void main()
{
	float hours,minutes;
	printf("Enter hours: ");
	scanf("%2f",&hours);
	minutes=hours*60;
	printf("Given hours in minutes is: %2f",minutes);
	getch();
}

