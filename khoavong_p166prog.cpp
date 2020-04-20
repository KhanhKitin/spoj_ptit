#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[10001],t[10001];
	int n,k1,k2,k3,dem=0;
	cin>>n;
	scanf("%s",s);
	scanf("%s",t);
	for(int i=0;i<n;i++){
		k1=abs(s[i]-t[i]);
		if(s[i]<=t[i]){
			k2=10+s[i]-t[i];
		}
		else {
			k2=10+t[i]-s[i];
		}
		k3=min(k1,k2);
		dem+=k3;
	}
	cout<<dem;
}
