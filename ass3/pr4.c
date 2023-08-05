#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the row and column number");
	printf("\n");
	scanf("%d",&n);
	
	int a[n][n];
	printf("Enter the elemnts in the row");
	printf("\n");
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int tot=n*n;
	int zero=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				zero=zero+1;
			}
		}
	}
	
	if(zero>((n*n)/2))
	{
		printf("Sparse matrix");
	}
	else
	{
		printf("not sparse matrix");
	}
	
}