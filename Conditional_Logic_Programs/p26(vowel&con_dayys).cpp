/*
26. WAP to show 
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case
*/

#include <stdio.h>
/*
main()
{
	 int Number;
    printf("Enter week number (1-7): ");
    scanf("%d", &Number);
	printf("\n\n\t");
    switch (Number) 
	{
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid week number. Please enter a number between 1 and 7.\n");
            break;
    }
    
}*/

main()
{
	char a;
	
	printf("\n\n\tEnter any Character : ");
	scanf("%c",&a);
	printf("\n\n\t");
	switch(a)
	{
		case 'a' :
		case 'A' :
		case 'e' :
		case 'E' :
		case 'i' :
		case 'I' :
		case 'o' :
		case 'O' :
		case 'u' :
		case 'U' :
			printf("%c is vowel",a);
			break;
		default :
			if( a >= 'a' && a <='z' || a >= 'A' && a<='Z')
			{
				printf("%c is a consonant.\n", a);
			}
			else
			{
				printf("%c is not a consonant.\n", a);
			}
	}
}

