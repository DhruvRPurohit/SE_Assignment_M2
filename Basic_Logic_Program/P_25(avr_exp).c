/* 25.Accept 5 expense from user and find average of expense */

#include<stdio.h>

main()
{
	int a,b,c,d,e,tot;
	printf("\nEnter Expense 1 : ");
	scanf("%d",&a);
	printf("\nEnter Expense 2 : ");
	scanf("%d",&b);
	printf("\nEnter Expense 3 : ");
	scanf("%d",&c);
	printf("\nEnter Expense 4 : ");
	scanf("%d",&d);
	printf("\nEnter Expense 5 : ");
	scanf("%d",&e);
	
	tot = a + b + c + d + e;
	printf("\n\nTotal EXpense is = %d & Aevrage Expense is = %d ",tot,tot/5);
}
