#include<bits/stdc++.h>
using namespace std;
int kt(long long n){
	int i;
	i=sqrt(n);
	if(i*i==n) return 1;
	return 0;
}
int main(){
	int t;
	long long n;
	cin>>t;
	while(t--){
		int dem=0;
		cin>>n;
		for(int i=0;i<=n;i++){
			int j=n-i*i;
			if(j>=i*i){
				if(kt(j)) dem++;
			}
			else break;
		}
		cout<<dem<<"\n";
	}
}
