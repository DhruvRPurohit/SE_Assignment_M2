/* 10.Write a program in C to extract a substring from a given string */

#include<stdio.h>

main()
{
	char str[100],str2[10];
	int i,p,s;
	
	printf("\n\n\tEnter the String : ");
	gets(str);
	
	printf("\n\n\tEnter the position to substring : ");
	scanf("%d",&p);
	
	printf("\n\n\tEnter the size of substring : ");
	scanf("%d",&s);
	
	for ( i=0; i<s && str[p + i] != '\0'; i++ )
	{
		str2[i] = str[(p-1)+i];
	}
	str[i]='\0';
	printf("\n\n\tSubstring : %s",str2);
	
}
