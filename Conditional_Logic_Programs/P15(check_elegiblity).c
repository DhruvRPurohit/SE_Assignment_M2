/* 15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include <stdio.h>
/*
math = 72
physics = 65
chemistry = 51

*/
main()
{
	int math,phy,chem,total,tot_ma_ph;
	
	printf("\n\n\tEligibility for admission to a professional course form");
	printf("\n\n\tEnter your mark in MATHS : ");
	scanf("%d",&math);
	printf("\n\tEnter your mark in PHYSICS : ");
	scanf("%d",&phy);
	printf("\n\tEnter your mark in CHEMISTRY : ");
	scanf("%d",&chem);
	
	total = math + phy + chem ;
	printf("\n\n\tTotal mark = %d ",total);
	tot_ma_ph = math + phy ;
	printf("\n\n\tMAth + Physics mark = %d ",tot_ma_ph);
	
	if(math > 65 && phy >55 && chem > 50 && total >=190  &&  tot_ma_ph >= 140 )
	{
		printf("\n\n\tThe candidate is Eligible .");
	}
	else
	{
		printf("\n\n\tThe candidate is not Eligible .");
	}
}
