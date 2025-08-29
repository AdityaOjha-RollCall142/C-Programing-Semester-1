#include <stdio.h>
#include <conio.h>

void main()
{
	float f,c;
	printf("Enter temperature in celsius: ");
	scanf("%f",&c);
	f = 1.8*c + 32;
	printf("Given temperature in fahrenhite is: %f",f);
	getch();
}
