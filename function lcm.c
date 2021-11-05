#include<stdio.h>
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	res=lcm(a,b);
	printf("%d",res);
}
int lcm(int a,int b)
{
	int t=2,sum=1;
	while(a!=0)
	{
		if(a%t==0 && b%t==0)
		{
			a=a/t;
			b=b/t;
			sum=sum*t;
		}
		else
		{
			t++;
		}
		if(t>a || t>b)
		{
			sum=sum*a*b;
			break;
		}
	}
	return sum;
}
