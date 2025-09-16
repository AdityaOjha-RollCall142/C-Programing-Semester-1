#include <stdio.h>
#include <conio.h>

void main()
{
	float dollars,rupees;
	printf("Enter dollars: ");
	scanf("%2f",&dollars);
	rupees=dollars*48;
	printf("Given dollars in rupees are: %2f",rupees);
	getch();
}

