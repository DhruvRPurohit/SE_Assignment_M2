/*19. Patterns:
A 
B C 
D E F
G H J K
L M N O P
*/

#include<stdio.h>

main()
{
	int i,j,a=65;
	
	for(i=0; i<5; i++ )
	{
		for(j=0; j<=i; j++)
		{
			printf(" %c ",a);
			a++;
		}
		printf("\n");
	}
}
