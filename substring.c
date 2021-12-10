#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],st[100];
	int len,i=0,j,l;
	gets(s);
	printf("enter the lenght of the substring");
	scanf("%d",&l);
	len=strlen(s);
	j=len-l;
	while(i<len)
	{
		st[i]=s[j];
		i++;
		j++;
	}
	st[i]!='\0';
	st[j]!='\0';
	printf("%s",st);

}
