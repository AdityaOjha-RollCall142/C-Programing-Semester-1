#include <stdio.h>
#include <conio.h>

void main()
{
	int bytes,KB,MB,GB;
	printf("Enter bytes to convert: ");
	scanf("%d",&bytes);
	KB=bytes/1024;
	MB=KB/1024;
	GB=MB/1024;
