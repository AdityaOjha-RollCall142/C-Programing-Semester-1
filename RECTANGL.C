#include <stdio.h>
#include <conio.h>
void main()
{
	float L,B,A,P;
	printf("Enter the length of the rectangle: ");
	scanf("%f",&L);
	printf("Enter the breadth of the rectangle: ");
	scanf("%f",&B);
	A=L*B;
	P=2*(L+B);
	printf("The perimeter of the rectangle is: %f\n",P);
	printf("The area of the rectangle is: %f",A);
	getch();
}