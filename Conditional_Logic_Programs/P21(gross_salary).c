/* 21. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%\  */


#include<stdio.h>

main()
{
	long int sal,hra,da,gsal;
	
	printf("\n\n\tEnter the salary of Employee : ");
	scanf("%ld",&sal);
	
	if( sal <= 10000 )
	{
		hra = ( sal * 20 / 100 );
		da = ( sal * 80 / 100 );
		gsal = da + hra + sal;
	}
	else if( sal <= 20000 )
	{
		hra = ( sal * 25 / 100 );
		da = ( sal * 90 / 100 );
		gsal = da + hra + sal ;
	}
	else
	{
		hra = ( sal * 30 / 100 );
		da = ( sal * 90 / 100 );
		gsal = da + hra + sal;
	}
	
	printf("\n\n\n\tEmployee salary is Calculation = ");
	printf("\n\n\tHRA = %ld ",hra);
	printf("\n\n\tDA = %ld ",da);
	printf("\n\n\tGross salary = %ld ",gsal); 
}
