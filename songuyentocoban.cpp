#include<stdio.h>
#include<math.h>
int nt(long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long n;
	scanf("%ld",&n);
	if(nt(n)) printf("YES\n");
	else printf("NO\n");
}
