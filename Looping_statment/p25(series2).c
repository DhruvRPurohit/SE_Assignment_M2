/* 25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) */

#include<stdio.h>

main()
{
	int i,num;
	
	printf("\n\n\tEnter any number : ");
	scanf("%d",&num);
	printf("\n\n");
	for(i=1; i<=num; i++)
	{
		printf("  (%d * %d)  +",i,i);
	}
}
