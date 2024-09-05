/* 14.Write a program in C to combine two strings manually */

#include<stdio.h>

main()
{
	char str[100],str2[100];
	
	printf("\n\n\tEnter the String 1 : ");
	gets(str);
	printf("\n\n\tEnter the String 2 : ");
	gets(str2);
	
	int i=0;
	
	printf("\n\n\tString 1 : %s",str);
	printf("\n\n\tString 2 : %s",str2);
	
	while(str[i] != '\0')
	{
		i++;
	}
	int j=0;
	while( str[j] != '\0')
	{
		str[i]=str2[j];
		i++;
		j++;
	}
	str[i]='\0';
	
	printf("\n\n\tString 1 : %s",str);
	
}
