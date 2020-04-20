#include<stdio.h>
int main(){
	int n,m,dem=0;
	scanf("%d",&n);
	m=n;
	while(n){
		n=n/10;
		dem++;
	}
	if(m>dem) printf("0");
	if(m==dem) printf("1");
}
