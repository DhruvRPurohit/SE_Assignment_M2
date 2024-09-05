/* 12. Accept number of students from user. I need to give 5 apples to each 
student. How many apples are required? */

#include<stdio.h>

main()
{
	int st,ap;
	printf("Enter number of Students : ");
	scanf("%d",&st);
	
	ap=st*5;
	printf("\n\n %d Apples are required ..",ap);
}

