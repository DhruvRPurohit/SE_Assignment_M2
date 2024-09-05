/* 32. Accept 2 numbers and find out its sum check it size */

#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter any value : ");
	scanf("%d",&a);
	printf("Enter any value : ");
	scanf("%d",&b);
	printf("\n\nsize of ( C ) = %d" , sizeof(c));
	c = a + b;
	
	printf("\n\n %d + %d = %d",a,b,c);
	printf("\n\nsize of ( C ) = %d" , sizeof(c));
	
}
