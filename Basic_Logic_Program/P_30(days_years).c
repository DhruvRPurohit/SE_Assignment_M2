/* 30. WAP to convert years into days and days into years */

#include <stdio.h>

main()
{
	int y,d,d1,y1;
	printf("Enter values of Years : ");
	scanf("%d",&y);
	d = y * 365;
	printf("\n\n%d Years = %d Days ",y,d);

	printf("\n\nEnter values in days : ");
	scanf("%d",&d1);
	y1 = d1/365;
	
	printf("\n\n%d Days = %d Years",d1,y1);
}
