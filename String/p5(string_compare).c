/* 5. Write a program in C to compare two strings without using string library
functions.  */

#include<stdio.h>

main()
{
	char str[100],str2[100];
	
	printf("\n\n\tEnter the String 1 : ");
	gets(str);
	printf("\n\n\tEnter the String 2 : ");
	gets(str2);
	
	int i=0,j=0;
	
	while(str[i] != '\0')
	{
		i++;	
	}
	
	while(str2[j] != '\0')
	{
		j++;	
	}	
	printf("\n\n\t %d : %d ",i,j);
	if ( i == j )
	{
		printf("\n\n\tBoth strings are Equal . ");
	}
	else if( i > j )
	{
		printf("\n\n\tString 1 is Big .");
	}
	else
	{
		printf("\n\n\tString 2 is Big .");
	}
	
}

