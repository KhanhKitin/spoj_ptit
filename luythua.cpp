#include<stdio.h>
#include<math.h>
void luythua(long long s){
	int n,m,t;
		scanf("%d%d",&n,&m);
		s=pow(2,n)+pow(3,m);
		while(s>=10){
			s=s/10;
		}
		printf("%lld",s);
}
int main(){
	long long s;
	luythua(s);
}
