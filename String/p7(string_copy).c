/*7. Write a program in C to copy one string to another string. */

#include<stdio.h>

main()
{
	char str[100],str2[100];
	
	printf("\n\n\tEnter any String : ");
	gets(str);
	int i=0;
	
	printf("\n\n\tEntered String : %s  ",str);
	while( str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i]='\0';	
	
	printf("\n\n\n\tCopied String : %s ",str2);
}
