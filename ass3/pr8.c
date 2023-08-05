#include<stdio.h>
#include<string.h>

int main()
{
	char c[100];
	printf("Enter the string:");
	gets(c);
	
	int i=0,k=0,j;
	for(;c[i]!='\0';i++);
	for(k=0,j=i-1;((c[k]==c[j])&&(k<=j));k++,j--);
	if(k>j)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
}