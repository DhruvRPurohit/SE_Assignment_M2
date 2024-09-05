/*  9. Write a program make a summation of given number (E.g., 1523 Ans: -11)  */

#include <stdio.h>

main()
{
	int num,a,sum;
	printf("\n\n\tEnter the number : ");
	scanf("%d",&num);
	
	while(num != 0)
	{
		a = num % 10;
		sum = a + sum ;
		num /= 10;
	}
	
	printf("\n\n\tSum of the number is = %d",sum);
	
}
