/* 2. Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo) */

#include<stdio.h>

void main()
{
	int a,b,c;
	printf("Enter value of A : ");
	scanf("%d",&a);
	printf("Enter value of B : ");
	scanf("%d",&b);
	c=a+b;
	printf("\nA + B = %d",a+b);
	printf("\nA - B = %d",a-b);
	printf("\nA * B = %d",a*b);
	printf("\nA / B = %d",a/b);
		
}
