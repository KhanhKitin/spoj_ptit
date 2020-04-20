#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,m;
	long a[1007],c[10001];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=m;j++){
		c[j]=m+1;
	}
	c[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=a[i];j<=m;j++){
			if(c[j]>1+c[j-a[i]]){
				c[j]=1+c[j-a[i]];
			}
		}
	}
	if(c[m]==m+1) cout<<"-1";
	else{
		cout<<c[m];
	}
}


