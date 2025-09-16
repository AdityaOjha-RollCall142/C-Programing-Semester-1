#include <stdio.h>
#include <conio.h>
void main()
{
	int ns,gs,all,ded;
	printf("Enter net salary: ");
	scanf("%d",&gs);
	all=0.1*gs;
	ded=0.03*gs;
	ns=gs+all-ded;
	printf("Net salary is: %d",ns);
    getch();
}

