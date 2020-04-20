#include<stdio.h>
int loai3(int n)
{
	int m,tg=0;
	m=n;
	while(n)
	{
		tg=tg*10+n%10;
		n=n/10;
	}
	if(tg==m) return 1;
	return 0;
}
int loai2(int n)
{
	int m=n;
	int s=0;
	while(n)
	{
		s+=n%10;
		n=n/10;
	}
	if((s%10==0)&&loai3(m)) return 1;
	return 0;
}
int loai1(int n)
{
	int t;
	while(n)
	{
		t=n%10;
		if(t==0) return 0;
		n=n/10;
	}
	return 1;
}
int main()
{	
	int dem1=0,dem2=0,dem3=0;
	int n,m,k;
	int test;
	scanf("%d",&test);
	for(int i=100000;i<=999999;i++)
	{
		if(loai3(i)) dem3++;
	}
		for(int i=100000;i<=999999;i++)
	{
		if(loai2(i)) dem2++;
	}
		for(int i=100000;i<=999999;i++)
	{
		if(loai1(i)&&loai2(i)) dem1++;
	}
	while(test--)
	{
		scanf("%d%d%d",&n,&m,&k);
		if(n<=dem1&&m<=(dem2-n)&&k<=(dem3-n-m)) printf("YES\n");
		else printf("NO\n");
	}
}
