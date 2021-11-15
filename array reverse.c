#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=4-1;i>=0;i--)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
