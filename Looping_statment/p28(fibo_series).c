/*  28. 1  2  3  6  9  18  27  54...  
         *2 +1  *2  +3 *2  +9  *2   */
         
#include<stdio.h>

main()
{
	int i,num,a=1;
	
	printf("\n\n\tEnter any number : ");
	scanf("%d",&num);
	i=1;
	
	while(i<=num)
	{
		if(i % 2 == 0)
		{
			a *= 2;
		}
		else
		{
			a *= 1.5;
		}
		printf("%d\t",a);
		i++;
	}
}
