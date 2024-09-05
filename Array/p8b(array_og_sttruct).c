/*8. Write a program of structure employee that provides the following

b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andag */

#include<stdio.h>

struct employee
{
	int emono;
	char addr[20],name[20];
}e[5];
main()
{
	int i=0;
	while(i<5)
	{
		printf("\n\n\tEnter Employee %d Data ==========================",i+1);
		printf("\n\n\tEnter the Employee number : ");
		scanf("%d",&e[i].emono);
		printf("\n\n\tEnter the Employee name : ");
		scanf("%s",&e[i].name);
		printf("\n\n\tEnter the Employee Address : ");
		scanf("%s",&e[i].addr);
		i++;
	}
	
	for(i=0; i<5; i++)
	{
		printf("\n\n\tData of Employee %d  ==========================",i+1);
		printf("\n\n\tEmployee ID : %d",e[i].emono);	
		printf("\n\n\tEmployee Name : %s",e[i].name);
		printf("\n\n\tEmployee Address : %s",e[i].addr);
	}
}
