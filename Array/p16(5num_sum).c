/* 16.Accept 5 numbers from user and perform sum of array */

#include<stdio.h>

main()
{
	int a[5],i,sum=0;
	
	for(i=0; i<5; i++ )
	{
		printf("\n\n\tEnter value %d : ",i+1);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("\n\n\tSum of Array : %d",sum);
}
	
