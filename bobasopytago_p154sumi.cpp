#include<iostream>
#include<math.h>
using namespace std;
int kt(int i,int n){
	int j=sqrt(i);
	if(j*j==i){
		if(j>=1&&j<=n) return 1;
	} 
	return 0;
}
int main(){
	int n,dem=0,kq;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			kq=i*i+j*j;
			if(kt(kq,n)){
				//cout<<i<<" "<<j;
				//cout<<"\n";
				dem++;
			}
		}
	}
	cout<<dem/2;
}
