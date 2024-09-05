/* 20. Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary. */

#include<stdio.h>

main()
{
	int sal,i,l,rsal;
	
	printf("Enter your salary : ");
	scanf("%d",&sal);
	i=sal*10/100;
	l=sal*10/100;
	rsal = sal - i - l;
	printf("\n\nYour Salary : %d ",sal);
	printf("\nYour Insurance Amount : %d ",i);
	printf("\nYour Loan Amount : %d ",l);
	printf("\nYour Remaining Salary : %d ",rsal);
	
}
