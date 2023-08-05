#include<stdio.h>
#include<string.h>
int main()
{
	char c[50][100],str[100],ch[100],s[100];
	printf("Enter the sentence:");
	gets(str);
	int i,words=0,j=0,k=0;
	for(i=0;str[i]!='\0';i++);
	str[i]=' ';
	str[i+1]='\0';
	
		
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			words+=1;
			c[j][k]='\0';
			j=j+1;
			k=0;
		}
		else
		{
			c[j][k++]=str[i];
		}
	}
	for(i=0;i<(words-1);i++)
	{
		for(j=0;j<((words-1)-i);j++)
		{
			if(strcmp(c[j],c[j+1])>0)
			{
				strcpy(ch,c[j]);
				strcpy(c[j],c[j+1]);
				strcpy(c[j+1],ch);
			}
		}
	}
	for(i=0;i<words;i++)
	{
		printf("%s ",c[i]);
	}
	printf("\n");
	printf("Enter the word to be searched:");
	scanf("%s",s);
	printf("\n");
	for(i=0;i<words;i++)
	{
	   if(strcmp(c[i],s)==0)
	   {
	   	printf("Search successful");
	   	break;
	   }
	}
	if(i>=words)
	{
		printf("Search unsuccessful");
		
	}
	
}