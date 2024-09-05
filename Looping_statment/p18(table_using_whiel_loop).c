/* 18. Write a C Program to Print the Multiplication Table of N 
i. E.g. 5 * 1 = 5 
ii. 5 * 2 = 10 
1. . 
2. . 
iii. 5 * 10 = 50 */

#include<stdio.h>

main()
{
	int num,i;
	
	printf("\n\n\tEnter the Any Number : ");
	scanf("%d",&num);
	i = 1;
	while(i <= 10)
	{
		printf("\n\n\t%d  X  %d  =  %d ",num,i,num*i);
		i++;
	}
}
