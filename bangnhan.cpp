#include<iostream>
#include<math.h>
using namespace std;
bool nt(long &n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void uoc(long &n,long &x){
	int dem=0;
	for(long i=2;i<=n;i++){
		if(x%i==0) dem++;
	}
	if(x>n) cout<<dem;
	if(x<=n){
		dem++;
		cout<<dem;
	}
}
int main(){
	int dem=0;
	long long i,j;
	long n,x;
	cin>>n>>x;
	if(nt(x)&&x>n) cout<<"0";
	if(nt(x)&&x<=n)	cout<<"2";
	if(nt(x)==0){
		uoc(n,x);
	}
}
