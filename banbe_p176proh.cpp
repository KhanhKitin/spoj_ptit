#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[100001];
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		for(int i=0;i<3;i++){
			for(int j=2;j>i;j--){
				if(a[j-1]>a[j]){
					swap(a[j-1],a[j]);
				}
			}
		}
		cout<<(a[2]-a[0])<<"\n";
	}
}
