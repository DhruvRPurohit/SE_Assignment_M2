/* 12.WAP to accept 5 students name and store it in array */

#include<stdio.h>

main()
{
	int i;
	char name[5][100];
	
	for (i=0; i<5; i++ )
	{
		printf("\n\n\tEnter Student name %d : ",i+1);
		gets(name[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("\n\n\tStudent %d name : %s",i+1,name[i]);
	}
	
}
