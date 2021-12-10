#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ch,rpc;
	int i,len=0;
	gets(s);
	fflush(stdin);
	printf("enter the char");
	scanf("%c",&ch);
	fflush(stdin);
	printf("enter the replace char");
	scanf("%c",&rpc);
	fflush(stdin);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(ch==s[i])
		{
			s[i]=rpc;
		}
	}
	printf("%s",s);
}
