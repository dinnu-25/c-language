#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],s1[100];
	int len1=0,len2=0,i=0,f=0;
	gets(s);
	gets(s1);
	len1=strlen(s);
	len2=strlen(s1);
	if(len1==len2)
	{
		while(i<len1)
		{
			if(s[i]==s1[i])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if(i==len1)
		{
			f==1;
			printf("equal");
		}
	}
	if(len1!=len2)
	{
		printf("not equal \t");
	}
	if(f==0)
	{
		if(s[i]>s1[i])
		{
			printf("str1 bigg");
		}
		else if(s[i]<s1[i])
		{
			printf("str2 bigg");
		}
	}
}
