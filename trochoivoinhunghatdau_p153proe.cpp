#include<stdio.h>
int main(){
	long long a[100000];
	long long n,du=0;
	int k=1;
	scanf("%lld",&n);
	for(int i=0;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=n;i>=2;i--){
		if((a[i]+du)%i!=0){
			k=0;
			break;
		}
		else {
			du=du+(a[i]+du)/i;
		}
	}
	if(k==1) printf("Yes");
	else printf("No");
}
