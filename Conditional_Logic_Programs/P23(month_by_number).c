/* 23. Accept month number and display month name  */

#include<stdio.h>

main()
{
	int n;
	
	printf("\n\n\tEnter the number (between 1 to 12 ):");
	scanf("%d",&n);
	
	printf("\n\n\t");
	
	switch(n)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("Febuary");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("Octomber");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default :
			printf("\n\n\tEntered value is Invalid . ");
			break;
	}
}
