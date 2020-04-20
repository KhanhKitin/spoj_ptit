#include<iostream>
#include<math.h>
using namespace std;
int kt1(long n){
	long t;
	t=(1-4*(-n));
	if(t<0) return false;
	return true;
}
int kt2(long n){
	long k;
	for(long i=1;i<n;i++){
		k=(1-4*(i*i+i-2*n));
		if(k<0) return false;
	}
	return true;
}
int main(){
	long n;
	cin>>n;
	if(kt1(n)||kt2(n)) cout<<"YES";
	else cout<<"NO";
}
