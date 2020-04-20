#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[10000];
	int b[10000];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	b[1]=1;
	for(int i=2;i<=n;i++){
		b[i]=1;
		for(int j=1;j<i;j++){
			if(a[j]<a[i]){
				b[i]=max(b[i],b[j]+1);
			}
		}
	}
	int kq=1;
	for(int i=1;i<=n;i++){
		kq=max(kq,b[i]);
	}
	cout<<kq;
}
