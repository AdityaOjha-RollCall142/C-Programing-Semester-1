#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter the two numbers: ");
	scanf("%d %d", &n1, &n2);
	n3=n2;
	n2=n1;
	printf("The swapped numbers are: %d %d",n3,n1);
	getch();
}