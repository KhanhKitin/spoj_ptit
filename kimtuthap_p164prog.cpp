#include<bits/stdc++.h>
using namespace std;
int tongTang(int k){
	if(k==1) return 1;
	else return k+tongTang(k-1);
}
int main(){
	int n,d=1,t=0;
	cin>>n;
	while(n>=tongTang(d)){
		n=n-tongTang(d);
		d++;
		t++;
	}
	cout<<t;
}

