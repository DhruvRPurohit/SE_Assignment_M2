/* 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n 
 */

#include<stdio.h>

main()
{
	int i,num;
	
	printf("\n\nEnter any number : ");
	scanf("%d",&num);
	
	for (i=1 ; i<=num; i++ )
	{
		printf(" %d/%d",i,i+1);
		if(i % 2 == 0)
			printf(" - ");
		else
			printf(" + ");
	}
	
}
