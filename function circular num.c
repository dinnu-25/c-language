#include<stdio.h>
void main()
{
	int n,rev,fc=0;
	scanf("%d",&n);
	fc=factorcount(n);
	if(fc==2)
{
	printf("prime\n");
	rev=reverse(n);
	fc=factorcount(rev);
	if(fc==2)
	{
		printf("circular num");
	}
	else
	{
		printf("not circular num");
	}
}
else
{
	printf("not prime");
}
}
int factorcount(int n)
{
	int i,fact=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
	{
	return 0;
}
}
return 1;
}
int reverse(int n)
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
