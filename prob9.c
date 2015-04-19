//Write functions for Matrix Multiplication,Addition,Subtraction,TRanspose
#include<stdio.h>
#include<stdlib.h>
main(){
	int sizeofMatrix;
	scanf("%d",&sizeofMatrix);
	int a[sizeofMatrix][sizeofMatrix],b[sizeofMatrix][sizeofMatrix];
	int i,j,k;
	for (i =0; i<sizeofMatrix; i++)
	{
		for (j=0;j< sizeofMatrix; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i =0; i<sizeofMatrix; i++)
	{
		for (j=0;j< sizeofMatrix; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int choice;
	scanf("%d",&choice);
	int c[sizeofMatrix][sizeofMatrix];
	if(choice == 1)//addition
	{
	for (i =0; i<sizeofMatrix; i++)
		{
			for (j=0;j< sizeofMatrix; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
	for (i =0; i<sizeofMatrix; i++)
		{
			for (j=0;j< sizeofMatrix; j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		} 
	}
	else if(choice == 2)//subtraction
	{
			for (i =0; i<sizeofMatrix; i++)
		{
			for (j=0;j< sizeofMatrix; j++)
			{
				c[i][j] = a[i][j] - b[i][j];
			}
		}
		for (i =0; i<sizeofMatrix; i++)
		{
			for (j=0;j< sizeofMatrix; j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		} 
	}

	else if (choice == 3)//multiplication
	{
		c[sizeofMatrix][sizeofMatrix];
		for (i =0; i<sizeofMatrix; i++)
		{
			for (j=0;j< sizeofMatrix; j++)
			{
				int sum = 0;
				for (k =0; k<sizeofMatrix; k++)
				{
					sum = sum + a[i][k]*b[k][j];
				}
				c[i][j]= sum;
			}
		}
		for (i =0; i<sizeofMatrix; i++)
		{
			for (j=0;j< sizeofMatrix; j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		} 
	}
		else if (choice == 4)
		{
			c[sizeofMatrix][sizeofMatrix];
			for (i =0; i<sizeofMatrix; i++)
			{
				for (j=0;j< sizeofMatrix; j++)
				{
					int temp;
					for (k =0; k<sizeofMatrix; k++)
					{
						temp = a[i][k];
						a[i][k] = a[k][j];
						a[k][j] = temp;
					}
				}
			}

		}

	}