#include<stdio.h>
int main()
{
	int arr[100],n,i,seclarge,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	seclarge=arr[0];
	for(i=1;i<n-1;i++)
	{
		if(seclarge<arr[i]);
		{
			seclarge=arr[i];
			pos=i;
		}
	}
	printf("seclarge is:%d\n",seclarge);
	printf("position is:%d",pos);
}
