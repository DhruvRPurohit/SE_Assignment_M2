/* 4. WAP to print table up to given numbers */

#include<stdio.h>

main()
{
	int i=1,a;
	
	printf("\n\tEnter number to Get table of NUmber : ");
	scanf("%d",&a);
	
	while(i<=10)
	{
		printf("\n\n\t %d  X  %d  =  %d ",a,i,a * i);
		i++;
	}
}
