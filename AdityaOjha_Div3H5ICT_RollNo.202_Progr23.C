#include <stdio.h>
#include <conio.h>
void main()
{
	int avg,s1,s2,s3;
	printf("Enter the marks for the three subjects: ");
	scanf("%d %d %d",&s1, &s2, &s3);
	avg=(s1+s2+s3)/3;
	printf("Average marks of the three subjects are: %d",avg);
	getch();
}
