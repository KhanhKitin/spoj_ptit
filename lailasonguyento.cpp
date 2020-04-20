#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int t;
	int n,dem=0;
	cin>>t;
	while(t--){
		cin>>n;
		if(nt(n)) dem++;
		for(int i=2;i<=n/2;i++){
			if(nt(i)){
				int s=0;
				for(int j=i;j<=n;j++){
					if(nt(j)){
						s+=j;
						if(s==n) dem++;
						else if(s>n) break;
					}
				}
			}
		}
		cout<<dem<<"\n";
		dem=0;
	}
}
//#include<stdio.h>
//#include<math.h>
//int nt(int n){
//	if(n<2) return 0;
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//int main(){
//	int t;
//	int n,dem=0;
//	scanf("%d",&t);
//	while(t--){
//		scanf("%d",&n);
//		if(nt(n)) dem++;
//		for(int i=2;i<=n/2;i++){
//			if(nt(i)){
//				int s=0;
//				for(int j=i;j<=n;j++){
//					if(nt(j)){
//						s+=j;
//						if(s==n) dem++;
//						else if(s>n) break;
//					}
//				}
//			}
//		}
//		printf("%d\n",dem);
//		dem=0;
//	}
//}
