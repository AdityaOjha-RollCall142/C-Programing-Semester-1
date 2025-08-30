#include <stdio.h>
#include <conio.h>
void main()
{
	float M,B,A;
	printf("Enter the median of the triangle: ");
	scanf("%f",&M);
	printf("Enter the base of the triangle: ");
	scanf("%f",&B);
	A=(M*B)/2;
	printf("The area of the triangle is: %f",A);
	getch();
}