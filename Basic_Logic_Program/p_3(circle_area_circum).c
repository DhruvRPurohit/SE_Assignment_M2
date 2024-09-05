/* 3. WAP to Find Area And Circumference of Circle */

#include<stdio.h>

main()
{
	float r,area,cir,pi=3.14;
	
	printf("\n\n\tEnter the Reduc of circle : ");
	scanf("%f",&r);
	
	area = pi * r * r;
	
	printf("\n\n\tArea of Circle : %.2f",area);
	
	cir = 2 * pi * r;
	
	printf("\n\n\tCircumference of Circle : %.2f",cir);
	
}
