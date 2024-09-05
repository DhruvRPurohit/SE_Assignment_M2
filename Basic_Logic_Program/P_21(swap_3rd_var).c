/* 21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable */

#include<stdio.h>

main()
{
	int a,b,c;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("\n\nBefore Swapping....................");
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n\nAfter Swapping....................");
	printf("\nA : %d",a);
	printf("\nB : %d",b);
}
