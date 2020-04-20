//#include<stdio.h>
//int main(){
//	int a,b,t,dem=0;
//	scanf("%d",&t);
//	while(t--){
//		scanf("%d%d",&a,&b);
//		if(b-a>=2) dem++;
//	}
//	printf("%d",dem);
//}
#include<iostream>
using namespace std;
int main(){
	int a,b,t,dem=0;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(b-a>=2) dem++;
	}
	cout<<dem;
}
