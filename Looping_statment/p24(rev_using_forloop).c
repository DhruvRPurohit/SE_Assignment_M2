/* 23. C Program to Reverse a Number Using FOR Loop  */

#include<stdio.h>

main()
{
	int num,rev=0,i,digit;
	
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&num);
	
	for(i=num; i!=0;  i/=10)
	{
		digit = i % 10;
		rev = rev * 10 + digit;
	}
	
	printf("\n\n\tRevese number = %d",rev);
}
