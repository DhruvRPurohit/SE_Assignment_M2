/* 10. WAP to check whether a number is negative, positive or zero. */

#include<stdio.h>

main()
{
	int num;
	
	printf("\tEnter any number : ");
	scanf("%d",&num);
	
	printf("\n\n\t");
	if (num == 0)
		printf("%d is zero .",num);
	else if (num > 0)
		printf("%d is Positeave Number .",num);
	else 
		printf("%d is Negiteave Number .",num);
}
