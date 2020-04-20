#include<stdio.h>
int main(){
	long n;
	long f0=0,f1=1,fn;
	scanf("%ld",&n);
	for(int i=2;i<=n;i++){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	printf("%ld",fn);
}
