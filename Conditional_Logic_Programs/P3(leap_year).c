/* 3 . WAP to check if the given year is a leap year or not. */

#include<stdio.h> 

main()
{
	int y;
	printf("Enter year : ");
	scanf("%d",&y);
	
	if(y % 4 == 0)
	{
		printf("%d yeear is Leap year .",y);
	}
	else
	{
		printf("%d year is not Leap year .",y);
	}

}
