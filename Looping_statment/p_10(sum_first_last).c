/* 10.Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans:- 5) */

#include<stdio.h>

main()
{
	int first,last,sum,num;
	
	printf("\n\tEnter the number : ");
	scanf("%d",&num);
	
	last = num % 10;
	
	while (num != 0)
	{
		first = num % 10;
		num /= 10;
	}
	sum = first + last;
	
	printf("Sum of First and Last Digit : %d",sum);
	
}
