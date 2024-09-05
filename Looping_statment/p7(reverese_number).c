/* 7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
82746  */

#include<stdio.h>

main()
{
	int a, rev=0;
	
	printf("Enter any number = ");
	scanf("%d",&a);
	int b;
	while(a != 0)
	{
		b = a % 10;//5
		rev = (rev * 10) + b; // 0*10 = 0 + 5
		a = a / 10;
	}
	printf("\n\n\t%d",rev);
}
