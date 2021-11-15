#include<stdio.h>
int main()
{
	int a[100],n,i,small,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
small=a[0];
for(i=1;i<n;i++)
{
	if(small>a[i]);
	{
		small=a[i];
		pos=i;
	}
}
printf("small is:%d\n",small);
printf("position is:%d",pos);
}
