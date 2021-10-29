#include<stdio.h>
int div(int,int);
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=div(a,b);
	printf("%d",sum);
}
int div(int a,int b)
{
	int c;
	c=a/b;
	return c;
}
