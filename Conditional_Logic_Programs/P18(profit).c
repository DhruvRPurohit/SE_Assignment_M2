/* 18. Write a C program to calculate profit and loss on a transaction. */

#include<stdio.h>

main()
{
	int buy,sell,amo;
	
	printf("\n\tEnter buying price : ");
	scanf("%d",&buy);
	printf("\n\tEnter the value Selling price : ");
	scanf("%d",&sell);
	
	amo = sell - buy;
	
	printf("\n\n\t");
	if(amo == 0)
	{
		printf("Your Profit Is %d.",amo);
	}
	else if(amo > 0)
	{
		printf("%d is Your Profit .",amo);
	}
	else
	{
		printf("%d is your Loss .",amo);
	}
}
