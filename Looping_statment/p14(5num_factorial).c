/* 14.Accept 5 numbers from user and find those numbers factorials */

#include<stdio.h>

main()
{
	int n1,n2,n3,n4,n5,f=1;
	
	printf("Enter value 1 :" );
	scanf("%d",&n1);
	printf("Enter value 2 :" );
	scanf("%d",&n2);
	printf("Enter value 3 :" );
	scanf("%d",&n3);
	printf("Enter value 4 :" );
	scanf("%d",&n4);
	printf("Enter value 5 :" );
	scanf("%d",&n5);
	
	int i;
	for(i=n1; i!=0; i--)
	{
		f=f*i;
	}
	printf("\n\n\n\tNumber   =   Factorial ");
	printf("\n\n\t %d     =     %d ",n1,f);
	f=1;
	for(i=n2; i!=0; i--)
	{
		f=f*i;
	}
	printf("\n\n\t %d     =     %d ",n2,f);
	f=1;
	for(i=n3; i!=0; i--)
	{
		f=f*i;
	}
	printf("\n\n\t %d     =     %d ",n3,f);
	f=1;
	for(i=n4; i!=0; i--)
	{
		f=f*i;
	}
	printf("\n\n\t %d     =     %d ",n4,f);
	f=1;	
	for(i=n5; i!=0; i--)
	{
		f=f*i;
	}
	printf("\n\n\t %d     =     %d ",n5,f);
	
}
