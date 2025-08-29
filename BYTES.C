#include <stdio.h>
#include <conio.h>

void main()
{
	int bytes,KB,MB,GB;
	printf("Enter bytes to convert: ");
	scanf("%d",&bytes);
	KB=bytes/1024;
	MB=bytes/(1024*1024);
	GB=bytes/(1024*1024*1024);
	printf("Given bytes in KBs,MBs and GBs is: %d",KB);
	printf(", %d",MB);
	printf("and %d",GB);
	getch();
}
