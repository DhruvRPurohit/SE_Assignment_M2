/*4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement */

#include<stdio.h>
main()
{	
	int a, b, choice;
	
	printf("\n\n\t Enter Number 1 : ");
	scanf("%d",&a);
	printf("\n\n\t Enter Number 2 : ");
	scanf("%d",&b);
	printf("\n\n\t ----------------------------------------");
	printf("\n\n\t Press + for Addition");
	printf("\n\n\t Press - for Subtraction");
	printf("\n\n\t Press * for Multiplication");
	printf("\n\n\t Press / for Division");
	printf("\n\n\t Press Modulo sign for Modulo");
	printf("\n\n\t ----------------------------------------");
	
	printf("\n\n\t Enter your choice of operation : ");
	scanf("%s",&choice);

	if(choice == '+')
		printf("\n\n\t Addition\n\t %d + %d  = %d",a,b, a+b);
		
	else if(choice == '-')
		printf("\n\n\t Subtraction\n\t %d - %d    = %d",a,b, a-b);
	
	else if(choice == '*')	
		printf("\n\n\t Multiplication\n\t %d X %d    = %d",a,b, a*b);

	else if(choice == '/')
		printf("\n\n\t Division\n\t %d / %d    = %d",a,b, a/b);
		
	else if(choice == '%')
		printf("\n\n\t Modulo \n\t %d Modulo %d  = %d ",a,b,a%b);
	
	else
		printf("\n\n\t Invalid choice!!!! Try again.");
}
