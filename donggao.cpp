#include<stdio.h>
int xuli(int n){
	int m,k;
	if(n<5&&n!=3) return -1;
	if(n==3) return 1;
	if(n%5==0) return n/5;
	k=n/5;
	for(int i=k;i>=0;i--){
		m=n;
		m=m-5*i;
		if(m%3==0) return (i+m/3);
	}
	return -1;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",xuli(n));
}
//#include<iostream>
//using namespace std;
//int xuli(int n){
//	int m,k;
//	if(n<5&&n!=3) return -1;
//	if(n==3) return 1;
//	if(n%5==0) return n/5;
//	k=n/5;
//	for(int i=k;i>=0;i--){
//		m=n;
//		m=m-5*i;
//		if(m%3==0) return (i+m/3);
//	}
//	return -1;
//}
//int main(){
//	int n;
//	cin>>n;
//	cout<<1xuli(n);
//}
