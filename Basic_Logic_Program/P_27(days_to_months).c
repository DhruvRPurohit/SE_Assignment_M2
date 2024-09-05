/* 27.Convert days into months */

#include<stdio.h>

main()
{
	int d,m,rd;
	
	printf("Enter the Days = ");
	scanf("%d",&d);
	
	m = d / 30;
	rd = d % 30;
	
	printf("\n\nMonths = %d \nRemaining Days are = %d ",m,rd);
}
