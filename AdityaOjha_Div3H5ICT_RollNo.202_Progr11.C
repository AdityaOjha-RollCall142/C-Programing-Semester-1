#include <stdio.h>
#include <conio.h>
void main()
{
	float grams,kg,remgrams;
	printf("ENTER GRAMS: ");
	scanf("%2f",&grams);
	kg=grams/1000;
	remgrams=grams%1000;
	printf("Given grams in kgs is %2f",kg);
	printf(".%2f",remgrams);
	getch();
}

