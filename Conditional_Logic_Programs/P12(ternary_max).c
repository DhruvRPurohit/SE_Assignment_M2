/* 12. WAP to find maximum number among 3 numbers using ternary operator  */

#include <stdio.h>

main()
{
	int a,b,c, max;
	
	printf("\n\tEnter value for A : ");
	scanf("%d",&a);
	printf("\n\tEnter value for B : ");
	scanf("%d",&b);
	printf("\n\tEnter value for C : ");
	scanf("%d",&c);
	
	 max = ( a > b && a > c) ? a : b;
	 max = ( max > c ) ? max : c ;
	 
	
	printf("\n\n\tA = %d",a);
	printf("\n\n\tB = %d",b);
	printf("\n\n\tC = %d",c);
	printf("\n\n\t%d is Maximun value . ",max);
}
