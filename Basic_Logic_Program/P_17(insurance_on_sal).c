/* 17. Calculate person’s insurance premium based on salary */

#include<stdio.h>

main()
{
	int sal,ip;
	
	printf("Enter your Salary : ");
	scanf("%d",&sal);
	ip = sal * 15 / 100;
	printf("Your insurance premium should  = %d",ip);
}
