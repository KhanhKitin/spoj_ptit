#include<stdio.h>
long long gt(long long n){
	if(n==1) return 1;
	else return n*gt(n-1);
}
int main(){
	int t,d=1;
	long long n;
	long long s=0;
	scanf("%d",&t);
	while(t--){
		long long tg;
		scanf("%lld,",&n);
		if(n>=0&&n<10){
			s=n*1;
		}
		else{
			while(n){
				tg=n%10;
				s+=tg*gt(d);
				d++;
				n=n/10;
			}
			d=1;
		}
		printf("%lld\n",s);
		s=0;
		
	}
}

