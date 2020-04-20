//#include<stdio.h>
//int main(){
//	long long a[100000];
//	long long n,k,max=0;
//	scanf("%lld",&n);
//	for(int i=1;i<=n;i++){
//		scanf("%lld",&a[i]);
//	}
//	for(int i=n;i>=1;i--){
//		for(int j=i-1;j>=1;j--){
//			k=a[i]%a[j];
//			if(k>=max) max=k;
//		}
//	}
//	printf("%lld",max);
//}
#include <stdio.h>
int main(){
	bool A[1000005];
	long n,a;
	long max=0;
	scanf("%ld",&n);
	for(long i=1;i<=1000000;i++) 
		A[i]=false;
	for(long i=0;i<n;i++){
		scanf("%ld",&a); 
		A[a]=true;
	}
	for(long i=1000000;i>max;i--)
		if(A[i]){
		for(long j=i-max-1;j>max;j--)
				if(A[j]){
					if(i%j>max) max=i%j;
				}
		}
	printf("%ld",max);
}
