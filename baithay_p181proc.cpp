#include<iostream>
using namespace std;
int main(){
	int d=0;
	long long n,k;
	cin>>n>>k;
	for(int i=2;i<k;i++){
		for(int j=i+1;j<=k;j++){
			if(n%i==n%j||n%j==0) {
				d=1;
				cout<<"No";
				return 0;
			}
		}
	}
	if(d==0) cout<<"Yes";
}
