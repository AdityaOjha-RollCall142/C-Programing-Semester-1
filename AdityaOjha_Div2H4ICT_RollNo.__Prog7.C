#include <stdio.h>
#include <conio.h>

void main()
{
	int minutes,hours,remminutes;
	printf("Enter minutes: ");
	scanf("%d",&minutes);
	hours=minutes/60;
	remminutes=minutes%60;
	printf("Given minutes in hours is: %d",hours);
	printf("hours and %d",remminutes);
	printf("minutes");
	getch();
}
