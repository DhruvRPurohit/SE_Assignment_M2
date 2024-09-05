/* 3. WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there 
b. How many odd numbers are there 
c. Sum of even numbers 
d. Sum of odd numbers */

#include <stdio.h>

main()
{
	int i,a,odd,even;
	
	for (i=0; i<10; i++)
	{
		printf("\n\n\n\tEnter the number %d = ",i + 1);
		scanf("%d",&a);
		
		if(a%2 == 0)
		{
			printf("\n\n\t%d is Even number .",a);
			odd +=a;
		}
		else
		{
			printf("\n\n\t%d is Odd number .",a);
			even +=a;
		}
		
	}
	printf("\n\n\tSum of Odd number = %d",odd);
	printf("\n\n\tSum of Even number = %d ",even);
	
}
