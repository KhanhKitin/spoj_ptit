#include<stdio.h>
int kt(long long n){
	int s;
	while(n){
		s=n%10;
		n=n/10;
		if(s!=4&&s!=7) return 0;
	}
	return 1;
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(kt(n)) printf("YES\n");
	else printf("NO\n");
}
