/*8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height. */

#include<stdio.h>

main()
{
	int c;
	
	printf("\n\n Enter your Height (In Centimetre) : ");
	scanf("%d",&c );
	printf("\n\n\n");
	if (c < 150) 
	{
        printf("The person is categorized as Short.\n");
    } 
	else if (c >= 150 && c <= 165) 
	{
        printf("The person is categorized as Average.\n");
    } 
	else if (c >= 166 && c <= 195) 
	{
        printf("The person is categorized as Tall.\n");
    } 
	else if (c > 195 && c < 260 ) 
	{
        printf("The person is categorized as Very Tall.\n");
    } 
	else
	{
        printf("Invalid input.\n");
    }
	
}
