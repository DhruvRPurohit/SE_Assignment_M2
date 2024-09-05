/* 20. WAP program to print below output using for loop 
  1 2 3 4 5 6 7 8 9 10 
  11 12 13 14 15 16 17 18 19 20
*/

#include<stdio.h>

main()
{
	int i,num,k=1;
	
	printf("\n\n\tEnter number : ");
	scanf("%d",&num);
	
	printf("\n\n");
	for (i=1; i<=num; i++)
	{
		printf("\t%d",i);
		if(k==10)
		{
			printf("\n\n");
			k = 0;
		}
		k++;
	}
}
