#include<stdio.h>
void main()
{
	int a[10][10],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=a[j][i];
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
	
