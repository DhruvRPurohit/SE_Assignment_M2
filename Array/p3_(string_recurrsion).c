/* 3. WAP to find reverse of string using recursion */

#include<stdio.h>

void reverse(char c[],int i)
{
	if(c[i]=='\0')
	{
		return;
	}
	reverse(c,i+1);
	printf("%c",c[i],i);
}
main()
{
	char c[100];
	
	printf("\n\tEnter any string : ");
	gets(c);
	printf("\n\n\tEntered String : %s",c);
	printf("\n\n\tReverse string is = ");
	reverse(c,0);
}
