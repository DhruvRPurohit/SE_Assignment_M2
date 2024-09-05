/* 17. Write a C program to check whether a triangle can be formed with the given 
values for the angles. */

#include<stdio.h>

main()
{
	int a,b,c,tot;
	
	printf("\n\n\tEnter the value Angel of Corner A : ");
	scanf("%d",&a);
	printf("\n\n\tEnter the value Angel of Corner B : ");
	scanf("%d",&b);
	printf("\n\n\tEnter the value Angel of Corner C : ");
	scanf("%d",&c);
	
	tot = a + b + c;
	
	printf("\n\n\n\t");
	if(tot == 180 )
		printf("Yes , Triangwl is possible");
	else
		printf("Yes , Triangwl is not possible.");
}
