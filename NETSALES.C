#include <stdio.h>
#include <conio.h>
void main()
{
	int ns,gs,disc;
	printf("Enter gross sales: ");
	scanf("%d",&gs);
	disc=0.1*gs;
	ns=gs-disc;
	printf("Net sales are: %d",ns);
	getch();
}