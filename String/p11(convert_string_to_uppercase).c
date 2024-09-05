/* 11.Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/

#include<stdio.h>

main()
{
	char str[100];
	int i;
	
	printf("\n\n\tEnter the string : ");
	gets(str);
	
	printf("\n\n\t%s",str);
	i=0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i]=str[i]-32;		
		}
		i++;
	}	
	printf("\n\n\t%s",str);
}
