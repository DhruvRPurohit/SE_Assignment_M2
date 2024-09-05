/* 17. Calculate 5 numbers from user and calculate number of even and odd using 
of while loop */

#include<stdio.h>

main()
{
	int num,oddc=0,evenc=0,i=0;
	
	while(i<5)
	{
		printf("\n\n\tEnter the number %d : ",i+1);
		scanf("%d",&num);
		
		if (num % 2 == 0)
			evenc++;
		else
			oddc++;
		num = 0;
		i++;
	}
	
	printf("\n\n\tEven Number : %d",evenc);
	printf("\n\n\tOdd Number : %d",oddc);
	
}
