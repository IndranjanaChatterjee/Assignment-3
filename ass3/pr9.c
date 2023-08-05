#include<stdio.h>
#include<string.h>

int main()
{
	char c[100],ch[100];
	printf("Enter the string:");
	gets(c);
	
	int i=0,k=0,j;
	ch[k++]=c[0];
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
		{
			ch[k++]=c[i+1];
		}
	}
	printf("%s",ch);
	
}