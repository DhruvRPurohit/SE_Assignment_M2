/*1. Write a C program to accept two integers and check whether they are equal 
or not */

#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter value of A : ");
	scanf("%d",&a);
	
	printf("Enter value of B : ");
	scanf("%d",&b);
	
	if( a == b)
	{
		printf(" A & B are Equal. ");		
	}
	else
	{
		printf(" B & A are not Equal. ");
	}
}
