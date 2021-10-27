#include<stdio.h>
int main()
{
	int i,n,r,oddcount=0,evencount=0,dc=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			evencount=evencount+1;
		}
		else
		{
			oddcount=oddcount+1;
		}
		dc=dc+1;
		n=n/10;
}
if(dc==evencount)
{
	printf("strong even");
}
else if(dc==oddcount)
{
	printf("strong odd");
}
else
{
	printf("mixed number");
}

}
