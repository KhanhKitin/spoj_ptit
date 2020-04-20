#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100001],n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+m);
	int hieu=1000000;
	for(int i=1;i<=m-n+1;i++){
		if(a[i+n-1]-a[i]<hieu){
			hieu=a[i+n-1]-a[i];
		}
	}
	cout<<hieu;
}
