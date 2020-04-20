#include<stdio.h>
void quangduong(long long d1,long long d2,long long d3)
{
	long long s1,s2,s3,s4,min;
	scanf("%lld%lld%lld",&d1,&d2,&d3);
	s1=d1+d2+d3;
	s2=2*d1+2*d2;
	s3=2*d2+2*d3;
	s4=2*d1+2*d3;
	min=s1;
	if(min>s2) min=s2;
	if(min>s3) min=s3;
	if(min>s4) min=s4;
	printf("%lld",min);
}
main()
{
	long long d1, d2, d3;	
	quangduong(d1,d2,d3);
}
