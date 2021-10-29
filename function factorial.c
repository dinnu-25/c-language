#include<stdio.h>
int bigg(int,int,int);
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=bigg(a,b,c);
	printf("%d",d);
}
int bigg(int a,int b,int c)
{
	int e;
	if(a>b)
	{
		if(a>c)
		{
			printf("a is bigg");
		}
		else
		{
			printf(" c is bigg");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is bigg");
		}
		else
		{
			printf("c is bigg");
		}
		return e;
	}
}
