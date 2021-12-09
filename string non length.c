#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int len,i;
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		i++;
	}
	len=i;
	printf("%d",i);
}
