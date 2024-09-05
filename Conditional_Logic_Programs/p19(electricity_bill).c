/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow : 

Unit Charge/unit 
upto 350 @1.20 
350 and above but less than 600 @1.50 
600 and above but less than 800 @1.80 
800 and above @2.00 
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and 
the minimum bill should be of Rs. 256/-  */

#include <stdio.h>

main()
{
	int cid,unit,amount;
	char name[10];
	
	printf("\n\n\tEnter the Customer ID        : ");
	scanf("%d",&cid);
	printf("\n\n\tEnter the name of Customer   : ");
	scanf("%s",&name);
	printf("\n\n\tEnter Units used by customer : ");
	scanf("%d",&unit);
	
	printf("\n\n\n\t----------------------------------------------------------------");
	printf("\n\n\tCustomer ID  : %d ",cid);
	printf("\n\n\tName         : %s ",name);
	printf("\n\n\tUnits Used   : %d ",unit);
	
	if (unit >200 && unit <= 350)
	{
		amount = unit * 1.2;
	}
	else if(unit > 350 && unit <= 600)
	{
		amount = unit * 1.6;
	}
	else if(unit >600 && unit <= 800 )
	{
		amount = unit * 1.8;
	}
	else if(unit >= 800)
	{
		amount = unit * 2;	
	}
	else
	{
		amount = 256;	
	}
	
	printf("\n\n\tTotal Amount     : %d",amount);
	
	if (amount >= 800 )	
	{
		printf("\n\n\t18(pr) TAX   : %d",amount*18/100);
		amount = amount + (amount * 18 / 100 );	
	}
	printf("\n\n\tPayeble Amount   : %d",amount);
}


