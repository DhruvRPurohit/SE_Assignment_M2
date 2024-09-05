/* 5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include<stdio.h>

main()
{
	int arr[2],i,j,ch;
	
	for(i=0; i<2; i++)
	{
		printf("\n\n\tEnter the value of %d => ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\tChose 1 to Sort array in Ascending Order\n\tChose 2 to Sort array in Descending Order\n\tEnter your Choice : ");
	scanf("%d",&ch);
	int t;
	if(ch == 1)	
	{
		if(arr[0] > arr[1])
		{
			t =arr[0];
			arr[0]=arr[1];
			arr[1]=t;	
		}
		printf("\n\n\tAscendig Order : ");
	}
	else
	{
		if(arr[0] < arr[1])
		{
			t =arr[0];
			arr[0]=arr[1];
			arr[1]=t;	
		}
		printf("\n\n\tDescendig Order : ");
	}
	printf("\n");
	for(i=0; i<2; i++)
	{
		printf("\t%d",arr[i]);
	}
	
}
