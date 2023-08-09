#include<stdio.h>
int main()
{
	int a[3][3];
	int r1=0,r2=2,c1=0,c2=2,j=1,i;
	do
	{
		for(i=c1;i<=c2;i++)
		{
			a[r1][i]=j;
			j++;
			
		}
		for(i=r1+1;i<=r2;i++)
		{
			a[i][c2]=j;
			j++;
			
		}
		for(i=c2-1;i>=c1;i--)
		{
			a[r2][i]=j;
			j++;
		}
		for(i=r2-1;i>=r1+1;i--)
		{
			a[i][c1]=j;
			j++;
		}
		
		r1++;
		r2--;
		c1++;
		c2--;
		
	}while(j<=9);
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}