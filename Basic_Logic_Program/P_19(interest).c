/* 19.Calculate compound interest  */

#include<stdio.h>

main()
{
	 int a,i,y;
	printf("\n\nEnter Amount : ");
	scanf("%ld",&a);
	printf("\n\nEnter Rate of Interest : ");
	scanf("%ld",&i);
	printf("\n\nEnter Years : ");
	scanf("%ld",&y);
	
	printf("\n\n\n\tAmount = %ld ",a);
	printf("\n\n\tRate of Interest = %ld ",i);
	printf("\n\n\tYears = %ld ",y);
	printf("\n\n\tInterest AMount = %ld ",a * i /100 * y);	

		
}
