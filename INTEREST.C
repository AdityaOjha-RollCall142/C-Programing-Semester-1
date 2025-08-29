#include <stdio.h>
#include <conio.h>
void main()
{
	float I,P,R,N;
	printf("Enter principal amount: ");
	scanf("%f",&P);
	printf("Enter rate: ");
	scanf("%f",&R);
	printf("Enter time period: ");
	scanf("%f",&N);
	I=(P*R*N)/100;
	printf("Interest amount is: %f",I);
	getch();
}