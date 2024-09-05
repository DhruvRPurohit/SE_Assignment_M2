/*   5. WAP to print factorial of given number */

#include<stdio.h>

main()
{
	int a,i,f=1;
	
	printf("Enter Any number for factorial of Number : ");
	scanf("%d",&a);
	
	for(i=a; i>=1; i--)
	{
		f = f * i;	
	}
	printf("\n\nFactorial value : %d ",f);
}
