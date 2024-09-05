/* 6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array */

#include<stdio.h>

main()

{
	int arr1[3][3],arr2[3][3],mul[3][3],i,j,k;
	
	printf("\n\n\tEnter value for matrix 1 = ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n\n\tEnter the value [%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("\n\n\tEnter value for matrix 2 = ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\n\n\tEnter the value [%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("\n\n\tValues of Matrix 1 =\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t%d",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\tValues of Matrix 2 = \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t%d",arr2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\tAddition of 2 Matrix =\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t%d",arr2[i][j] + arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\tSubtraction of 2 Matrix =\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t%d",arr1[i][j] - arr2[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i<3; i++)
	{
			 	
		for(j=0; j<3; j++)
		{
			mul[i][j]=0;
			for(k=0; k<3; k++)
			{
				mul[i][j] += arr1[i][k] * arr2[k][j];
			}
		}	
	}
	
	printf("\n\n\tMultipication of 2 Matrix =\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
	
}
