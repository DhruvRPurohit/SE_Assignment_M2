/*  13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array */

#include<stdio.h>

main()
{
	int a[5],i;
	
	for(i=0; i<5; i++ )
	{
		printf("\n\n\tEnter value %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		if(a[i] % 2 == 0)
			printf("\n\n\t %d is Even number . ",a[i]);
		else
			printf("\n\n\t %d is Odd number . ",a[i]);
	}
}
