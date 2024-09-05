/*  8. Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)  */

#include<stdio.h>

main()
{
	int i,num,a,max;
	
	printf("\n\n\tEnter any number : ");
	scanf("%d",&num);
	
	while(num != 0)
	{
		a = num % 10;
		if(a > max)
		{
			max = a;
		}
		num/=10;
	}
	printf("\n\n\tMaximum Number is  %d ",max);
}
