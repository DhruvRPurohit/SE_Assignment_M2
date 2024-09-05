#include<stdio.h>

void matrixmul(int arr1[2][2],int arr2[2][2]);

main()
{
	int arr1[2][2],arr2[2][2];
	
	int i=0,j=0;
	
	printf("\n\n\t------------------------------------Enter the Data of Matrix 1 :  ------------------------------------\n");
	for (i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\n\tEnter Elements [%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("\n\n\t------------------------------------Enter the Data of Matrix 2 :  ------------------------------------\n");
	for (i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\n\tEnter Elements [%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	
	printf("\n\n\t------------------------------------Data of Matrix 1 :  ------------------------------------\n\n");
	for (i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\t%d",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\t------------------------------------Data of Matrix 2 :  ------------------------------------\n\n");
	for (i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\t%d",arr2[i][j]);
		}
		printf("\n");
	}
	
	matrixmul( arr1, arr2);
}

void matrixmul(int arr1[2][2],int arr2[2][2])
{
	int mul[2][2],i,j,k;
	
	for (i=0; i<2; i++)
	{
		
		for(j=0; j<2; j++)
		{
			mul[i][j]=0;
			for(k=0; k<2; k++)
			{
				mul[i][j]+= arr1[i][k] * arr2[k][j];	
			}
		}
		printf("\n");
	}
	
	printf("\n\n\t------------------------------------Matrix Multipication :  ------------------------------------\n\n");
	for (i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
}
