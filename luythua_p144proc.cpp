#include<iostream>
using namespace std;
long long k=1000000007;
long long luythua(long long a,long long n){
	long long s;
	if(n==0) return 1;
	if(n%2==0){
		s=(luythua(a,n/2));
		return (s*s)%k;
	}
	else return (luythua(a,n-1)*a)%k;
}
int main(){
	long long a,b;
	do{
		cin>>a>>b;
		if(a==0&&b==0) break;
		cout<<luythua(a,b)<<"\n";
	}
	while(1);
}
