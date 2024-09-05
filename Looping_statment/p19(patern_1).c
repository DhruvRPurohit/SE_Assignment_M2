/*	19.  1
  		 1 0
  		 1 0 1
  		 1 0 1 0
  		 1 0 1 0 1*/
  		 
#include<stdio.h>

main()
{
	int i,j,num,k;
	
	printf("Enter any number : ");
	scanf("%d",&num);

	for(i=0; i<=num; i++)
	{
		k=2;
		for(j=0; j<i; j++)
		{
			if(k % 2 == 0)
			{
				printf(" 1 ");
			}
			else
			{
				printf(" 0 ");
			}
			k++;
		}
		printf("\n");
	}
}
