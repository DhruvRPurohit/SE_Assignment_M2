/* 13.Write a program in C to remove characters from a string except alphabets. */

#include<stdio.h>

main()
{
	char str[100];
	
	int i=0;
	
	printf("\n\n\tEnter the string :");
	gets(str);
	
	int j=0;
	
	while( str[i] != '\0')
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ' || str[i] == '\t' || str[i] == '\n') )
		{
			str[i] = ' ';
		}
		i++;
	}
	
	printf("\n\n\tNew string : %s ",str);
}
