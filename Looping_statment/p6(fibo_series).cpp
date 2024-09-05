/* 6. WAP to print Fibonacci series up to given numbers */

#include<stdio.h>

main()
{
	int f1=1,f2=1,a;
	printf("\n\n\tEnter ending point : ");
	scanf("%d",&a);
	printf("\n\t");
	for(int i=0; i<=a; i++)
	{
		printf("\t%d",f1);
		printf("\t%d",f2);
		f1 = f1 + f2; //2 
		f2 = f2 + f1; //2+1
		
	}
}
