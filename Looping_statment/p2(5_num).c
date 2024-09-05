/* 2. WAP to accept 5 numbers from user and display all numbers */

#include<stdio.h>

main()
{
	int a,i;
	
	while(i<5)
	{
		printf("\n\n\tEnter number %d :",i+1);
		scanf("%d",&a);
		
		printf("\n\tNumber %d: %d ",i+1 ,a);
		i++;
	}
}
