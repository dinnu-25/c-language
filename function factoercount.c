#include<stdio.h>
int factcount(int);
int main()
{
	int n,d;
	scanf("%d",&n);
	d=factcount(n);
	printf("factcount=%d",d);
}
int factcount(int n)

{
int i,factcount=0;
for(i=1;i<=n;i++)
{
	if(n%i==0)
	factcount=factcount+1;
}
return factcount;
}

	

