/* 22. Accept 3 numbers from user using while loop and check each numbers 
palindrome  */

#include<stdio.h>

main()
{
	int num,rev,last,i;
	
	i = 1;
	while(i <= 3)
	{
		printf("\n\n\tEnter the number %d : ",i);
		scanf("%d",&num);
		int a = num;
		rev = 0;
		while ( a!= 0)
		{
			last = a % 10;
			rev = rev * 10 + last;
			a /= 10 ;
		}
		if (num == rev )
		{
			printf("\n\n\t%d is a Palidrone number. ",num);
		}
		else
		{
			printf("\n\n\t%d is not a Palidrone number.",num);
		}
		i++;
	}
}
