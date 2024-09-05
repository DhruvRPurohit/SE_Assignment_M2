/* 10.WAP to perform Palindrome number using for loop and function */

#include<stdio.h>

main()
{
	int num;
	
	printf("\n\n\tEnter the Number : ");
	scanf("%d",&num);
	
	if(is_palidrone(num))
		printf("\n\n\t%d Palidrone Number.",num);
	else
		printf("\n\n\t%d is not Palidrone Number.",num);
	
}

int is_palidrone(int num)
{
	int rem,rev=0,a;
	a=num;
	for(; num!=0; num/=10 )
	{
		rem = num % 10;
		rev = rev * 10 + rem;
	}
	
	if( a == rev)
	 	return 1;
	else
		return 0;
		
}
