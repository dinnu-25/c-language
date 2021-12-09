#include<stdio.h>
#include<string.h>
void main()
{
	char str[10],str1[10];
	scanf("%[^\n]s",&str);
	scanf(" %[^\n]s",&str1);
	printf("%s\n",str);
	printf("%s",str1);
}
