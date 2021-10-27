#include<stdio.h>
int main()
{
	int r,n,sum=0,num;
	scanf("%d",&n);
	n=num;
	while(n!=0)
	{
		r=n%10;
		sum=(sum+r*r*r);
		n=n/10;
	}
	if(sum==num)
	{
		printf("armstrong num");
	}
	else
	{
		printf("not armstrong num");
	}
	
}
