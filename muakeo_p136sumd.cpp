#include<bits/stdc++.h>
using namespace std;
int main(){
	long long h;
	long c,v,k,a,b;
	cin>>c>>k;
	h=pow(10,k);
	a=c/h;
	b=c%h;
	if(b<(h/2)){
		v=a*h;
	}
	if(b>=(h/2)){
		v=(a+1)*h;
	}
	cout<<v;
}
