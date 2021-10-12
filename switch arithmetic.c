#include<stdio.h>
int main()
{
	char ch,
	scanf("%c",&ch);
    int a,b,res;
	scanf("%d%d",&a,&b);
	switch(ch)
	{
	case '+':
	res=a+b;
	printf("%d",res);
	break;
	case '-':
	res=a-b;	
	printf("%d",res);	
	case '*':
	res=a*b;
	printf('%d',res);
	case '/':
	res=a/b;
	printf("%d",res);
	case '%':
	res=a%b;
	printf("%d",res);
	default:("invalid input");	
}
