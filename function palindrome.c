#include<stdio.h>
int main()
{
	int n,res=0;
	scanf("%d",&n);
	res=palindrome(n);
	if(n==res)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
int palindrome(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
return sum;
}
