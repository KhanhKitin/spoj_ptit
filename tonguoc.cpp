#include<stdio.h>
#include<math.h>
void tonguoc(long long n){
	long long s=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0) {
			if(i==n/i) s+=i;
			else s+=i+n/i;
		}
	}
	printf("%lld\n",s);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		tonguoc(n);
	}
}
