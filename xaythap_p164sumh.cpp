#include<bits/stdc++.h>
using namespace std;
int main(){
	int dem=0;
	int n,i=1,a=2;
	cin>>n;
	while(n>=i){
		n=n-i;
		dem++;
		i=i+a;
		a++;
	}
	cout<<dem;
}
