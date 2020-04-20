#include<bits/stdc++.h>
using namespace std;
int main(){
	long long s=0;
	long long k,n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		k=(pow(-1,i)*i);
		s+=k;
	}
	cout<<s;
}

