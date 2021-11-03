#include<stdio.h>
int main()
{
	int n,res;
	scanf("%d",&n);
	res=sum(n);
	printf("%d",res);
}
int sum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}

	

