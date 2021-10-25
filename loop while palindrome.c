#include<stdio.h>
int main()
{
	int n,r,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
