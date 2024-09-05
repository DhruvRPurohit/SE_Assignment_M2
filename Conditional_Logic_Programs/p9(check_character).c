/* 9. C Program to Check Uppercase or Lowercase or Digit or Special 
Character */

#include <stdio.h>

main()
{
	char ch;
	
	printf("\tEnter any Charcater : ");
	scanf("%c",&ch);
	
	printf("\n\n\t");
	if (ch >= 65 && ch <=90)
	{
		printf("%c is Uppercase Character . ",ch);
	}
	else if(ch >= 97  && ch <= 122)
	{
		printf("%c is Lowercase Character . ",ch);
	}
	else if(ch >= 48  && ch<= 57 )
	{
		printf("%c is Number . ",ch);	
	}
	else 
	{
		printf("%C is Special Character.",ch);
	}

	
}
