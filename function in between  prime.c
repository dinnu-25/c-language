#include<stdio.h>
int perfect(int);
int main()
{
	int i,n,res;
	scanf("%d",&n);
	res=perfect(n);
	if(n==res)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}
}
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	return sum;
}
