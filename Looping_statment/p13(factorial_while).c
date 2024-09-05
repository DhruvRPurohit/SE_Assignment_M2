/*  13.calculate the Factorial of a Given Number using while loop */

#include<stdio.h>

main()
{
	int num,i,f;
	
	printf("\n\n\tEnter any number : ");
	scanf("%d",&num);
	
	i = num;
	while(i != 0)
	{
		f = i * f;
		i--;
	}
	printf("\n\n\tFactorial = %d",f);
}
