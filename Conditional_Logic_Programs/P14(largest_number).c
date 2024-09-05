//14.WAP to find the largest of three numbers. 

#include<stdio.h>

main()
{
	int n1,n2,n3;
	
	printf("\nEnter any 3 values ==> ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if( n1 > n2 && n1 > n3 )
	{
		printf("\n\n%d is Largest value . ",n1);
	}
	else if(n2 > n3)
	{
		printf("\n\n%d is Largest value . ",n2);
	}
	else
	{
		printf("\n\n%d is Largest value . ",n3);
	}
}
