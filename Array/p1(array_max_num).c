/* 1. Write a program to find out the max number from given array using function */

#include<stdio.h>

main()
{
	int n,i,max=1;
	
	printf("\n\n\tEnter the size of Array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0; i<n; i++)
	{
		printf("\n\n\tEnter the number [%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n\n\tArray Data : \n");
	for(i=0; i<n; i++)
	{
		printf("\t%d",arr[i]);
		
		if( max < arr[i])
		{
			max = arr[i];
		}
	}
	
	printf("\n\n\tMaximum number of Array is = %d ",max);
}
