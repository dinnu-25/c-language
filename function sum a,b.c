#include<stdio.h>
int sub(int,int);
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=sub(a,b);
	printf("%d",sum);
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
