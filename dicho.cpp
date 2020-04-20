//#include<stdio.h>
//int main(){
//	long long y,k,n;
//	long dem=0,t;
//	scanf("%d%d%d",&y,&k,&n);
//	for(long i=k;i<=n;i+=k){
//		if((n/k)<1) break;
//		if(i%k==0 && i>=y+1){
//			t=i-y;
//			dem++;
//			break;
//		}
//	}
//	if(dem==0) printf("-1");
//	else{
//		for(long i=t;i<=n-y;i+=k){
//			printf("%d ",i);
//		}
//	}
//}
#include<iostream>
using namespace std;
int main(){
	long long y,k,n;
	cin>>y>>k>>n;
	long d=0;
	long long t=(y/k+1)*k;
	while(t<=n){
		cout<<t-y<<" ";
		t+=k;
		d++;
	}
	if(d==0) cout<<-1;
}
