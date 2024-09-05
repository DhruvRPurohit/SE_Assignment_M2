/* 23. WAP to calculate swap 2 numbers with using of multiplication and division. */

#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("\n\nBefore Swapping....................");
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	
	a = a * b; /*a = 200 b=20*/
	b = a / b; /*a = 200 b = 20  */
	a = a / b; /*a = 10 */
	
	printf("\n\nAfter Swapping....................");
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	
}
