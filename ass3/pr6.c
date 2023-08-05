#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the row and column number");
	printf("\n");
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m];
	printf("Enter the elemnts in the row");
	printf("\n");
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Original matrix");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int r1,r2,c;
	printf("Enter the two rows to be exchanged");
	printf("\n");
	scanf("%d%d",&r1,&r2);
	for(i=0;i<n;i++)
	{
		c=a[r1-1][i];
		a[r1-1][i]=a[r2-1][i];
		a[r2-1][i]=c;
	}
	printf("Original matrix");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
}