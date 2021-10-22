#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&d);

	switch(d)
	{
		    case 1: 
		    scanf("%d",&a);
		    d=a*a;
			printf("%d",d);
			break;
			case 2:
				scanf("%d%d",&a,&b);
			d=a*b;
			printf("%d",d);
			break;
			case 3:
				scanf("%d%d",&a,&b);
			d=0.5*a*b;
			printf("%d",d);
			break;
			case 4:
				scanf("%d%d%d",&a,&b,&c);
			d=(a*b*c)/100;
			printf("%d",d);
			break;
			default:
			printf("wrong input");
			
	}
}
	

