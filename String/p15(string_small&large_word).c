/* 15. Write a program in C to find the largest and smallest words in a string */

#include<stdio.h>
#include<string.h>

main()
{
	char str[100],large[20],small[20];
	
	printf("\n\n\tEnter the sring : ");
	gets(str);
	
	largest_smallestword(str,large,small);
	
	printf("\n\n\tLargest Word : %s",large);
	printf("\n\n\tSmallest Word : %s",small);
	
}

largest_smallestword(char str[],char large[],char small[])
{
	int max=0,min=100,len=0;
	char word[100];
	int i=0,j=0;
	
	while(1)
	{
		while(str[i]!=' ' && str[i] != '\0')
		{
			word[j++]=str[i++];
		}
		word[j] = '\0';
		int len = strlen(word);
		
		if( len > max)
		{
			max = len;
			strcpy(large,word);
		}
		
		if( len < min )
		{
			min = len;
			strcpy(small,word);
		}
		j=0;
		if(str[i] == '\0')
		{
			break;
		}
		i++;
	}
}

