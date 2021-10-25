#include<stdio.h>
int main()
{
	int i,s,n;
	scanf("%d%d",&n,&s);
	for(i=1;i<=s;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
