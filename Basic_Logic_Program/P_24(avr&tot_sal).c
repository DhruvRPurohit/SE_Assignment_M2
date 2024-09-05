/* 24.Accept 5 employees name and salary and count average and total salary */

#include<stdio.h>

main()
{
	char e1[10],e2[10],e3[10],e4[10],e5[10];
	long int s1,s2,s3,s4,s5,totsal,avsal;
	
	printf("\nEnter your Name : ");
	scanf("%s",&e1);
	printf("\nEnter salary : ");
	scanf("%ld",&s1);
	
	printf("\n\n\nEnter your Name : ");
	scanf("%s",&e2);
	printf("\nEnter salary : ");
	scanf("%ld",&s2);
	
	printf("\n\n\nEnter your Name : ");
	scanf("%s",&e3);
	printf("\nEnter salary : ");
	scanf("%ld",&s3);
	
	printf("\n\n\nEnter your Name : ");
	scanf("%s",&e4);
	printf("\nEnter salary : ");
	scanf("%ld",&s4);
	
	printf("\n\n\nEnter your Name : ");
	scanf("%s",&e5);
	printf("\nEnter salary : ");
	scanf("%ld",&s5);
	
	totsal = s1 + s2 + s3 + s4 + s5 ;
	avsal = totsal / 5;
	
	printf("\n\n\nTotal Salary : %ld",totsal);
	printf("\nAevrge Salary : %ld",avsal);
}
