/* Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
*/

#include<stdio.h>

struct employee
{
	int emono;
	char addr[20],name[20];
}e;
main()
{
	printf("\n\n\tEnter the Employee number : ");
	scanf("%d",&e.emono);
	printf("\n\n\tEnter the Employee name : ");
	scanf("%s",&e.name);
	printf("\n\n\tEnter the Employee Address : ");
	scanf("%s",&e.addr);
	
	printf("\n\n\tEmployee ID : %d",e.emono);	
	printf("\n\n\tEmployee Name : %s",e.name);
	printf("\n\n\tEmployee Address : %s",e.addr);
}
