#include<bits/stdc++.h>
using namespace std;
int main(){
	long long r,l,x;
	long long s=1;
	int kt=0;
	cin>>l>>r>>x;
	long long b=x;
	if(s>=l&&s<=r){
		cout<<s<<" ";
		kt=1;
	} 
	if(b>=l&&b<=r){
		cout<<b<<" ";
		kt=1;
	}
	if(b<=r){
		s=b;
		while((r/s)>=b){
			x=x*b;
			s=x;
			if(s>=l&&s<=r){
				cout<<s<<" ";
				kt=1;
			}
		}
	}
	if(kt==0){
		cout<<"-1";
	}
	return 0;
}
