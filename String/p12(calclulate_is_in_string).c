/* 12.Write a program in C to find the number of times a given word 'is' appears in
the given string. */

#include<stdio.h>

main()
{
	char str[100];
	
	int i=0,count=0; 
	
	printf("\n\n\tEnter the string : ");
	gets(str);
	
	while(str[i] != '\0')
	{
		if( str[i]=='i' && str[i+1]=='s' )
		{
			count++;
		}
		i++;
	}
	printf("\n\n\tIs used in String : %d",count);
	
}
