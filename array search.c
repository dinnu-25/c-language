#include<stdio.h>
void main()
{
	int arr[100],search,n,mb=0,i;
	scanf("%d",&n);
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			mb=1;
	}
}
	if(mb==0)
	{
		printf("element is not found\n");
	}
	else
	{
		printf("element is found");
	}
}

