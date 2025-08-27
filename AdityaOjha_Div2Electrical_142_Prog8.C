#include <stdio.h>
#include <conio.h>

void main()
{
	int dollars,rupees;
	printf("Enter dollars: ");
	scanf("%d",&dollars);
	rupees=dollars*48;
	printf("Given dollars in rupees are: %d",rupees);
	getch();
}
