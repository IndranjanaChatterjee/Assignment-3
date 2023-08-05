#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter the row and column");
	printf("\n");
	scanf("%d",&r);
	scanf("%d",&c);
	int arr[r][c];
	int i,j;
	printf("Enter the elements in the dda");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int arr1[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
				arr1[i][j]=arr[(r-1)-j][i];
			
			//printf("%d ",arr[0][j]);
		}
	}
	printf("Rotated matrix");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
}