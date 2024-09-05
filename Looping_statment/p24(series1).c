/* 24. 1 + 2 + 3 + 4 + 5 + ... + n */

#include<stdio.h>

main()
{
	int i,num;
	
	printf("\n\n\tEnter any number : ");
	scanf("%d",&num);
	printf("\n\n");
	for(i=1; i<=num; i++)
	{
		printf(" %d +",i);
	}
}
