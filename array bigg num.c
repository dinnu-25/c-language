#include<stdio.h>
int main()
{
	int a[3],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
		if(a[0]>a[1] && a[0]>a[2])
		{
			printf("%d",a[0]);
		}
		else if(a[1]>a[0] && a[1]>a[2])
		{
		    printf("%d",a[1]);	
		}
		else
		{
			printf("%d",a[2]);
		}
	}
