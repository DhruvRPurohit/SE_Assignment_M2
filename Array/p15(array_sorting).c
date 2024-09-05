/* 15.Store 5 numbers in array and sort it in ascending order */

#include<stdio.h>

main()
{
	int a[5],i;
	
	for(i=0; i<5; i++ )
	{
		printf("\n\n\tEnter value %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	int j,t;
	
	for (i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				t = a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}	
	}
	
	printf("\n\n\tSorted Values : \n ");
	for(i=0; i<5; i++ )
	{
		printf("\t%d",a[i]);
	}
	
}
