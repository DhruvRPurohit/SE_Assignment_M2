/*7. Accept marks from user and check pass or fail */

#include<stdio.h>

main()
{
	int m1,m2,m3;
	
	printf("\n\nEnter Mark of Subject 1 : ");
	scanf("%d",&m1);
	
	printf("\n\nEnter Mark of Subject 2 : ");
	scanf("%d",&m2);
	
	printf("\n\nEnter Mark of Subject 3 : ");
	scanf("%d",&m3);
	
	if(m1 < 40 || m2 < 40 || m3 < 40 )
	{
		printf("\n\n FAIL");
	}
	else
	{
		printf("\n\n PASS ");
	}
}
