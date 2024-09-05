/* 3. Write a program in C to print individual characters of a string in reverse order */

#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int i;
	printf("\n\n\tEnter the string : ");
	gets(str);
	
	for( i=strlen(str)-1; i>=0; i-- )
	{
		printf("\n\tCharacter Index %d is : %c ",i,str[i]);
	}
}
