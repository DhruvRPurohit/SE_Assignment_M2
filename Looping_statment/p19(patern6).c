/* 19. Pattern 6

A 
A B
A B C
A B C D
A B C D E

*/

#include<stdio.h>

main()
{
	int i,j,k='A';
	
	for(i=0; i<5; i++)
	{
		k = 'A';
		for(j=0; j<=i; j++)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}	
}
