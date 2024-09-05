/*29.Convert minutes into seconds and hours */

#include<stdio.h>

main()
{
	int s,m,h;
	
	printf("Enter Minutes : ");
	scanf("%d",&m);
	
	s = m * 60;
	h = m / 60;
	
	printf("\nHour = %d ",h);
	printf("\nMinutes  = %d ",m);
	printf("\nSeconds = %d ",s);
}
