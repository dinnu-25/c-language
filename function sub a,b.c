#include<stdio.h>
int mul(int,int);
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=mul(a,b);
	printf("%d",sum);
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
