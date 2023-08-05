#include<stdio.h>
#include<string.h>
void reverse(char *ch,char *rev)
{
	int i=0;
	for(;*ch!='\0';ch++,i++);
	for(ch--,i--;i>=0;ch--,i--)
	{
		*rev=*ch;
		rev++;
	}
	*rev='\0';
}
int main()
{
	char c[100];
	printf("Enter the string:");
	gets(c);
	char rev[100];
	reverse(c,rev);
	printf("Reversed String %s",rev);
	
}