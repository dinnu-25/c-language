#include<stdio.h>
int main()
{
	int a,b,t=2,res=1;
	scanf("%d%d",&a,&b);
	while(a!=0)
	{
		if(a%t==0 && b%t==0)
		{
			a=a/t;
			b=b/t;
			res=res*t;
		}
		else
		{
			t++;
		}
		if(t>a || t>b)
		{
			res=res*a*b;
			break;
		}
	}
	printf("%d",res); 
}
