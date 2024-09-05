/* 4. Write a program in C to count the total number of words in a string. */

#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int i;
	printf("\n\n\tEnter the string : ");
	gets(str);
	
	int words=0;
	for( i=0; i<strlen(str); i++ )
	{
		if(str[i] == ' ')
		{
			words++;	
		}
	}
	
	printf("\n\n\tWords in String is : %d",words+1);
}
