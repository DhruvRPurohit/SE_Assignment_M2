/* 2. Write a program in C to separate individual characters from a string */

#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i;
	printf("\n\n\tEnter the string : ");
	gets(str);
	
	for( i=0; i<strlen(str); i++ )
	{
		printf("\n\tCharacter Index %d is : %c ",i,str[i]);
	}
}
