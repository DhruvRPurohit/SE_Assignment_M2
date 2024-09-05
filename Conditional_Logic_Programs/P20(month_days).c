/* 
20. Write a program in C to read any Month Number in integer and display the 
number of days for this month. */

#include <stdio.h>

main()
{
	int num;
	
	printf("\n\n\tEnter Number of month : ");
	scanf("%d",&num);
	
	switch (num)
	{
		case 1 :
			printf("\n\n\tJanuary has 31 Days .");
			break;
		
		case 2 :
			printf("\n\n\tFebruary has 28/29 Days . ");
			break;
			
		case 3 :
			printf("\n\n\tMarch has 31 Days . ");
			break;
			
		case 4 :
			printf("\n\n\tApril has 30 Days . ");
			break;
			
		case 5 :
			printf("\n\n\tMay has 31 Days . ");
			break;
			
		case 6 :
			printf("\n\n\tJune has 30  Days . ");
			break;
		
		case 7 :
			printf("\n\n\tJuly has 31 Days . ");
			break;
			
		case 8 :
			printf("\n\n\tAugust has 31 .");
			break;
			
		case 9 :
			printf("\n\n\tSeptember has 30");
			break;
		
		case 10 :
			printf("\n\n\tOctober has 31 Days . ");
			break;
			
		case 11 :
			printf("\n\n\tNovember has 30 Days . ");
			break;
			
		case 12 :
			printf("\n\n\tDecember has 31 Days . ");
			break;
				
		default :
			printf("\n\n\tEntered value is Invalid . ");
			break;
	}
}
