/* 9. Write a program in C to find the maximum number of characters in a string */


#include<stdio.h>

main()
{
	char str[100];
	printf("\n\n\tEnter the strring : ");
	gets(str);
	
	int i=0;
	
	while(str[i] != '\0')
	{
		i++;	
	}	
	
	printf("Maximum length of the string is : %d",i);
	
}


