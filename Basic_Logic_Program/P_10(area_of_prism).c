/* 10.find the area of a rectangular prism formula : A=2(wl+hl+hw) */

#include<stdio.h>

main()
{
	int h,w,l,area;
	
	printf("\n\n\tEnter the height of prism : ");
	scanf("%d",&h);
	
	printf("\n\n\tEnter the Width of prism : ");
	scanf("%d",&w);
	
	printf("\n\n\tEnter the Length of prism : ");
	scanf("%d",&l);
	
	int hw = h * w;
	int wl = l * w;
	int lh = l * h;
	area = 2 * (hw + wl + lh);
	printf("\n\n\tArea of the Prism = %d ",area);
}
