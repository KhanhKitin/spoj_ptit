#include<stdio.h>
int main(){
	long long n;
	while(1){
		scanf("%lld",&n);
		if(n==0) break;
		if(n<1000000) printf("%lld\n",n);
		else if(n>=1000000&&n<5000000){
			n=n-(n*10)/100;
			printf("%lld\n",n);
		}
		else if(n>=5000000){
			n=n-(n*20)/100;
			printf("%lld\n",n);
		}
	}
}
