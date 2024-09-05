/* 11. WAP to find number is even or odd using ternary operator  */

#include<stdio.h>

main()
{
	int n,a;
	
	printf("\tEnter any number := ");
	scanf("%d",&n);
	
	(n % 2 == 0) ? printf("\n\n\tNumber is Even .") : printf("\n\n\tNumber is Odd.");
	
	(a = n % 2 == 0) ? printf("\n\t%d",a):printf("\n\t%d",a);
}
