#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[1000],b[1000];
	long t,n,h=1;
	cin>>t;
	while(t--){
		long long k=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
		}
		sort(a,a+n);
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<" ";
//		}
//		cout<<"\n";
		sort(b,b+n,greater<int>());
//		for(int j=0;j<n;j++){
//			cout<<b[j]<<" ";
//		}
		for(int i=0;i<n;i++){
			k+=a[i]*b[i];
		}
		cout<<"Case #"<<h<<": "<<k<<"\n";
		h++;
	}
}
