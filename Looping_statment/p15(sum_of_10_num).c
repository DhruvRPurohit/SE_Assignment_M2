/* 15.Calculate sum of 10 numbers using of while loop */

#include<stdio.h>

main()
{
	int num,sum,i=1;
	
	while(i <= 10)
	{
		printf("\n\n\tEnter the number %d :",i);
		scanf("%d",&num);
			
		sum += num;
		num=0;
		i++;			
	}	
	
	printf("\n\n\tSum of 10 number : %d",sum);
}
