/* 28.Convert years into days and months */

#include<stdio.h>

main()
{
	int y,m,d;
	
	printf("Enter year : ");
	scanf("%d",&y);
	
	m = y * 12;
	d = y * 365;
	
	printf("\nYears = %d ",y);
	printf("\nMonths  = %d ",m);
	printf("\nDays = %d ",d);
}
