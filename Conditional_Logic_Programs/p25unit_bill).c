/* 25. Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill */

#include<stdio.h>

main()
{
	float unit,amount;
	
	printf("\n\n\tEnter unit used by the user : ");
	scanf("%f",&unit);
	printf("\n\n\t");
	if (unit <= 50 )
	{
		printf("charge At Rs. 0.50/unit ");
		amount =unit * 0.5;
	}
	else if (unit <= 150 )
	{
		printf("charge At Rs. 0.75/unit ");
		amount =unit * 0.75;
	}
	else if (unit <= 250 )
	{
		printf("charge At Rs. 1.20/unit ");
		amount =unit * 1.20;
	}
	else
	{
		printf("charge At Rs. 1.5/unit ");
		amount =unit * 1.5;
	}
	
	printf("\n\tAmount = %.2f",amount);
	printf("\n\t20 per. Surcharge = %.2f",amount * 20 / 100);
	amount = amount + amount * 20 / 100 ;
	printf("\n\n\tTotal Payble Amount : %.2f",amount);
	
}
