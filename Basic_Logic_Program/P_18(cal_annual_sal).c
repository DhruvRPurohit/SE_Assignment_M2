/* 18. Calculate person’s Annual salary */

#include <stdio.h>

main()
{
	int sal;
	long int an_sal;
	printf("Enter monthly salary : ");
	scanf("%d",&sal);	
	
	an_sal = sal * 12;
	
	printf("\n\nYour Annual salary = %ld",an_sal);
}

