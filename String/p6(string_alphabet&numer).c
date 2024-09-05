/* 6. Write a program in C to count the total number of alphabets, digits and special
characters in a string. */

#include <stdio.h>

main()
{
	int i=0,a,digit,sc;
	char str[100];
		
	a=digit=sc=0;
	
	printf("\n\n\tEnter any String : ");
	gets(str);
	
	while ( str[i] != '\0' )
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
		{
			a++;
		}
		else if (str[i] >= 0 && str[i] <= 9 )
		{
			digit++;
		}
		else if (str[i] != ' ')
		{
			sc++;	
		}
		i++;
	}
	
	printf("\n\n\tTotal Alphabets  : %d ",a);
	printf("\n\n\tTotal Digits  : %d ",digit);
	printf("\n\n\tTotal Special Character : %d ",sc);
}
