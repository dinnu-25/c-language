#include<stdio.h>
int prime();
void main()
{
	int n,res=0;
	res=prime();
	printf("%d",res);
	if(n==res)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
int prime()
{
	int i,n,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=count+1;
		}
		return count;
	}
}
