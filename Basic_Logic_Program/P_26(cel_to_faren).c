/* 26.Convert temperature Fahrenheit to Celsius */

#include<stdio.h>

main()
{
	float f,c;
	printf("Enter the vlaue of Farenheit : ");
	scanf("%f",&f);
	
	c = (f-32) * 5 / 9;
	
	printf("\n\n%.2f Farenheit = %.2f Celsius",f,c);
	
}
