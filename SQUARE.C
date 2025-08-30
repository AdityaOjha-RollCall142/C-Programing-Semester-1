#include <stdio.h>
#include <conio.h>
void main()
{
	float L,A,P;
	printf("Enter length of the side of the square: ");
	scanf("%f",&L);
	A=L*L;
	P=4*L;
	printf("The perimeter of the square is: %f\n",P);
	printf("The area of the square is: %f",A);
	getch();
}