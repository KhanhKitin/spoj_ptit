#include<stdio.h>
long long  gt(long long n){
	if(n==0||n==1) return 1;
	else return n*gt(n-1);
}
int main(){
	long long tg,k;
	long long n,s=0;
	scanf("%lld",&n);
	s=gt(n);
	if(s<10){
		printf("%lld",s);
		return 0;
	}
	else{
		tg=s%10;
		while(tg==0){
			s=s/10;
			tg=s%10;
			if(tg!=0) break;
		}
	}
	printf("%lld",tg);
}
