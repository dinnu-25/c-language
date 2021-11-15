#include<stdio.h>
void main()
{
	int a[10],i,position,element,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("a[%d]=%d\n",i,a[i]);
	}
	printf("enter the position:");
	scanf("%d",&position);
	printf("enter the element to insert in the array:");
	scanf("%d",&element);
	for(i=n-1;i>=position;i--)
	{
		a[i+1]=a[i];
	}
	a[position]=element;
	n++;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
