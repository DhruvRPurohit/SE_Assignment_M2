/* 16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot */

#include <stdio.h>

main()
{
	int temp;
	
	printf("\n\n\tEnter the Temperature : ");
	scanf("%d",&temp);
	
	printf("\n\n\t");
	if(temp < 0)
		printf("Freezing weather");
		
	else if(temp >0  && temp <10)
		printf("Cold weather");
	else if(temp >= 10 && temp < 20)
		printf("Very Cold weather");
	else if(temp >=20 && temp <30)
		printf(" Normal Wether ");
	else if(temp >= 30 && temp <40)
		printf("It's Hot Weather.");
	else if(temp >= 40 && temp < 60)
		printf("It's Very hot Weather.'");
	else
		printf("Enter valid input .");
}
