/* 11. Accept 5 names from user at run time. */

#include<stdio.h>

main()
{
	char name[5][15];
	int i;
	
	for(i=0; i<5; i++ )
	{
		printf("\n\n\tEnter your name [%d] = ",i);
		scanf("%s",&name[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("\n\n\t[%d]  %s ",i+1,name[i] );
	}	
}
