#include <stdio.h>
#include <conio.h>
void main()
{
	float R,A;
	printf("Enter the radius of the circle: ");
	scanf("%f",&R);
	A=3.14*R*R;
	printf("The area of the circle is: %f",A);
	getch();
}
