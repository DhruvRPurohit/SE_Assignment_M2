/* 14.Perform 2D matrix array */

#include<stdio.h>

main()
{
	int row,col;
	
	printf("\n\n\tEnter the  Row size : ");
	scanf("%d",&row);
	printf("\n\n\tEnter the  Collumn size : ");
	scanf("%d",&col);

	int arr[row][col],i,j;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\n\n\tEnter the value [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\n\tMatrix values : \n\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\t%d",arr[i][j]);	
		}
		printf("\n");
	}
}
