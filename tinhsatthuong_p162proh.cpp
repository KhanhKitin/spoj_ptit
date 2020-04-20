#include<iostream>
using namespace std;
int main(){
	long long x;
	long long di=0,d0=0,dem=0;
	long i=1;
	cin>>x;
	while(x>di){
		di=d0+i;
		d0=di;
		x=x-di;
		if(x<0) break;
		dem++;
		i++;
	}
	cout<<dem;
}
