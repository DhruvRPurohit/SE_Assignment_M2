/* 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) */

#include<stdio.h>

main()
{
	int i,j,num;
	
	printf("\n\n\tEnter any number : ");
	scanf("%d",&num);
	printf("\n\n");
	
	
	for(i=1; i<=num; i++)
	{
		printf("(");
		for(j=1; j<=i; j++)
		{
			printf(" %d ",j);
			if(j < i)
			{
				printf("+");
			}
		}
		printf(")  +  ");
	}
}
