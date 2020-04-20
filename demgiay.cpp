#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",a,b);
	if(a>b) 
	{
		printf("%d ",a-b);
		printf("%d",(a-b)/2);
	}
	else if(a<b)
	{
		printf("%d ",b-a);
		printf("%d",(b-a)/2);
	}
	else 
	{
		printf("%d",a);
		printf("%d",a-b);
	}

}
