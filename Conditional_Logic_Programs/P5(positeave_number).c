/*5. Check Number Is Positive or Negative */

#include<stdio.h>

main()
{
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num >= 0 )
	{
		printf("%d is Positeave Number.");
	}
	else
	{
		printf("%d is Negiteave Number.");
	}
}
