/* 1. Write a program in C to find the length of a string without using library
functions */

#include<stdio.h>

main()
{
	char str[50];
	int length=0;
	
	printf("\n\n\tEnter the String : ");
	gets(str);
	
	while(str[length]!='\0')
	{
		length++;
	}
	
	printf("\n\n\tLength of the string : %d",length);
}
