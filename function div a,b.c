#include<stdio.h>
int fact(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=fact(n);
	printf("%d",res);
}
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
