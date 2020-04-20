#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long n,x;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&x);
		long long t=sqrt(x);
		if(x==1||t*t!=x||!nt(t)){
			printf("NO\n");
		}
		else printf("YES\n");
	}
}
