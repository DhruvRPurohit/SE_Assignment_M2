/* 31. Convert kilometers into meters */

#include<stdio.h>

main()
{
	int k,m;
	
	printf("Enter values in Kilomeater : ");
	scanf("%d",&k);
	
	m = k * 1000;
	
	printf("%d Kilomeater = %d Meaters ",k,m);
}
