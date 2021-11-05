#include<stdio.h>
void main()
{
	int res=0,n;
	scanf("%d",&n);
	res=sum(n);
	printf("%d",res);
}
int sum(int n)
{
	if(n==1)
	{
		return 0;
	}
	else
	{
		return n+sum(n-1);
	}
}
