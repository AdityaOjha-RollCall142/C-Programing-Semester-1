#include <stdio.h>
#include <conio.h>

void main()
{
	float kgs,grams;
	printf("Enter kgs to convert: ");
	scanf("%2f",&kgs);
	grams=kgs/1000;
	printf("Given kgs in grams is: %2f",grams);
	getch();
}
