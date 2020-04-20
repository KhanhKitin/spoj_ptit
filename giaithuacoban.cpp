#include<stdio.h>
long long gt(long long n ){
	long long gt=1;
	for(int i=1;i<=n;i++){
		gt=gt*i;		
	}
	return gt;
}
int main(){
	long long n;
	do{ 
 	scanf("%lld",&n);
	if(n==0) break; 
	printf("%lld\n",gt(n));
	} 
	while(n!=0); 
}

