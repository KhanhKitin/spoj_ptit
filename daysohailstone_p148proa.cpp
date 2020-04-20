//#include<stdio.h>
//int main(){
//	int dem=0;
//	long n;
//	do{
//		scanf("%ld",&n);
//		if(n==0) return 0;
//		while(n!=1){
//		//	if(n==1) return 0;
//			if(n%2==0){
//				n=n/2;
//			//	printf("%ld ",n);
//				dem++;
//			}
//			else {
//				n=3*n+1;
//				//printf("%ld ",n);
//				dem++;
//			}
//		}
//		printf("%d\n",dem+1);
//		dem=0;
//	}
//	while(n!=0);
//}
#include<iostream>
using namespace std;
int main(){
	int dem=0;
	long n;
	do{
		cin>>n;
		if(n==0) return false;
		while(n!=1){
		//	if(n==1) return 0;
			if(n%2==0){
				n=n/2;
			//	printf("%ld ",n);
				dem++;
			}
			else {
				n=3*n+1;
				//printf("%ld ",n);
				dem++;
			}
		}
		cout<<dem+1<<"\n";
		dem=0;
	}
	while(n!=0);
}
