/*7. WAP Find out length of string without using inbuilt function*/

#include<stdio.h>

main()
{
	int i=0;
	char s[100],length=0;
	
	printf("\n\n\tEnter the any String  : ");
	gets(s);
	
	printf("\n\t%s",s);
	
	while( s[length] != '\0')
	{
		length++;
	}
	printf("\n\n\tLength of String is : %d ",length);
	
}
