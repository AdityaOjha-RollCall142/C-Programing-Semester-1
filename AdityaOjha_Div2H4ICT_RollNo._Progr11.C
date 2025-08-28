#include <stdio.h>
#include <conio.h>
void main()
{
	int grams,kg,remgrams;
	printf("ENTER GRAMS: ");
	scanf("%d",&grams);
	kg=grams/1000;
	remgrams=grams%1000;
	printf("Given grams in kgs is %d",kg);
	printf(".%d",remgrams);
	getch();
}
