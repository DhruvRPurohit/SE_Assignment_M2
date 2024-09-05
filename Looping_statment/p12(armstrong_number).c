/* 12. Program of Armstrong Number in C Using For Loop & While Loop*/

#include<stdio.h>

main()
{
	int arm,i,num;
	
	printf("\n\n\tEnter any number : ");
	scanf("%d",&arm);
	
	int chk = arm ;
	while (arm != 0)
	{
		int rem = arm % 10 ;
		num =  num + (rem * rem * rem);
		arm /=10;	
	}
	if (chk == num )
		printf("\n\n\t%d is a Armstrong number .",chk);
	else
		printf("\n\n\t%d is not an Armstrong number .",chk);	
}
