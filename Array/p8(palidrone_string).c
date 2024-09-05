/* 8. WAP to reverse a string and check that the string is palindrome or not


*/

#include<stdio.h>
#include<string.h>

main()
{
	char str[20],str2[20];
	int i,n;
	
	printf("\n\n\tEnter the string : ");
	gets(str);
	char t;
	
	strcpy(str2,str);
	
	n = strlen(str);
	for ( i=0; i<n/2; i++ )
	{
		t = str[i];
		str[i] = str[n-i-1];
		str[n-i-1]=t;
	}
	
	if (stricmp(str2,str)==0)
		printf("\n\n\tIt's Palidrone string .");
	else
		printf("\n\n\tIt's not a Palidrone string . ");
	
	printf("\n\n\tReverse string : %s",str);
	
}

