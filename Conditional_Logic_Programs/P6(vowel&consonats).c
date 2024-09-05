/*6. Find the Character Is Vowel or Not */

#include <stdio.h>

 main()
 {
 	char ch;
 	
 	printf("Enter any character : ");
 	scanf("%c",&ch);
 	
 	if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'  )
 	{
 		printf("\n\n%c is Vowel ",ch);
	}
	else 
	{
		printf("\n\n%c is Consonants .",ch);
	}	 
 }
