#include<stdio.h>
int factorcount(int);
int main()
{
	int i,n,res;
	scanf("%d",&n);
	res=factorcount(n);
	if(res==1)
	{
		printf("prime");
	}
	else{
		printf("not prime");
	}
}
int factorcount(int n)
{
	int i,fact=0;
	for(i=2;i<=10;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
