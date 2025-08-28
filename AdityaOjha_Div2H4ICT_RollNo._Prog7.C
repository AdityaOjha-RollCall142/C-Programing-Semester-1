#include <stdio.h>
#include <conio.h>

void main()
{
	float minutes,hours,remminutes;
	printf("Enter minutes: ");
	scanf("%2f",&minutes);
	hours=minutes/60;
	remminutes=minutes%60;
	printf("Given minutes in hours is: %2f",hours);
	printf("hours and %2f",remminutes);
	printf("minutes");
	getch();
}

