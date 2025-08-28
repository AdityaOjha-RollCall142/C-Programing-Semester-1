#include <stdio.h>
#include <conio.h>

void main()
{
	float dollars,rupees,pounds;
	printf("Enter dollars to convert: ");
	scanf("%2f",&dollars);
	rupees=dollars*48;
	pounds=rupees/70;
	printf("Given dollars in pounds are: %2f",pounds);
	getch();
}
