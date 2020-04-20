#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,w,x,c;
	int dem=0;
	cin>>a>>b>>w>>x>>c;
	while(c>a){
		c=c-1;
		if(b>=x){
			b=b-x;
		}
		else{
			a=a-1;
			b=w-(x-b);
		}
		dem++;
	}
	cout<<dem;
}
