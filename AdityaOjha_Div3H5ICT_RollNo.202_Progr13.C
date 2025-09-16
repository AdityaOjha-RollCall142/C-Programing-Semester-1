#include <stdio.h>
#include <conio.h>

void main()
{
	float bytes,KB,MB,GB;
	printf("Enter bytes to convert: ");
	scanf("%f",&bytes);
	KB=bytes/1024;
	MB=KB/1024;
	GB=MB/1024;
	printf("Given bytes in KBs,MBs and GBs is: %f",KB);
	printf(", %f",MB);
	printf("and %f",GB);
	getch();
}

