#include<stdio.h>
int strong(int);
int main()
{
	int i,n,res;
	scanf("%d",&n);
	res=strong(n);
	if(n==res)
	{
		printf("strong");
	}
	else
	{
		printf("not strong");	
	}
}
int strong(int n)
{
	int i,r,sum=0,fact=1;
	{
		while(n!=0)
		{
			r=n%10;
			i=1;
			fact=1;
			while(i<=r)
			{
				fact=fact*i;
				i++;
			}
			sum=sum+fact;
			n=n/10;
		}
		return sum;
	}
}
