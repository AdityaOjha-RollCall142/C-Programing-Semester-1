#include <stdio.h>
#include <conio.h>
void main()
{
	int avg,s1,s2,s3,t;
	printf("Enter the marks for the three subjects: ");
	scanf("%d %d %d",&s1, &s2, &s3);
	avg=(s1+s2+s3)/3;
	t=s1+s2+s3;
	printf("Average marks of the three subjects are: %d and the total is %d",avg,t);
	getch();
}

