/* 22. Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P */

#include<stdio.h>

main()
{
	double p,roi,ci,i,a,b;
	int time;

	printf("\nEnter principal amount: ");
    scanf("%lf", &p);
    printf("\nEnter annual interest rate (in percentage): ");
    scanf("%lf", &roi);
    printf("\nEnter time (in years): ");
    scanf("%d", &time);
    a=p;
    for(i=1; i<=time; i++)
    {
    	ci = p * (1 + roi / 100 ) ;
    	p=ci;
	}
	b = ci - a;
    
    printf("\n\nCompound Interest after %d years: %.2lf\n", time, ci);
    printf("\nCOmpound Interest  Amount = %.2lf",b);
	
}
