#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the values of m and n");
	printf("\n");
	scanf("%d",&m);
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the values in the dda");
	printf("\n");
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int rdia=0,ldia=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				rdia=rdia+a[i][j];
			}
			if((i+j)==(n-1))
			{
				ldia=ldia+a[i][j];
			}
		}
		
	}
	printf("Sum of right diagonal %d\n",rdia);
	printf("Sum of left diagonal %d",ldia);
	return 0;
	
}