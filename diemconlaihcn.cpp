#include<stdio.h>
int main(){
	long long a,b,c,d,e,f;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	if(a==c) printf("%lld",e);
	else if(a==e) printf("%lld",c);
	else printf("%lld",a);
	printf(" ");
	if(b==d) printf("%lld",f);
	else if(b==f) printf("%lld",d);
	else printf("%lld",b);
}
