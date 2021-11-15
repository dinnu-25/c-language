#include<stdio.h>
int main()
{
	int arr[100],i,n,small,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	for(i=1;i<n;i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
			pos=i;
		}
	}
	printf("small is:%d\n",small);
	printf("position is:%d",pos);
}
