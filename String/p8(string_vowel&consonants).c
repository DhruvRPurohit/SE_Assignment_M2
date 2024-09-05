/* 8. Write a program in C to count the total number of vowels or consonants in a
string.*/

#include<stdio.h>

main()
{
	char str[100];
	int v=0,c=0,s=0;;
	
	printf("\n\n\tEnter the String : ");
	gets(str);
	
	int i=0;
	while(str[i] != '\0')
	{
		if( str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
		{
			v++;
		}
		else if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
		{
			c++;
		}
		i++;
	}
	
	printf("\n\n\tTotal Vowels in String : %d",v);
	printf("\n\n\tTotal Consonants in String : %d",c);
}
