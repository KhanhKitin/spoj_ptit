#include<iostream>
using namespace std;
int main(){
	long long a,b,k=0,h;
	cin>>a>>b;
	while(b!=0){
		k+=a/b;
		h=a%b;
		a=b;
		b=h;
	}
	cout<<k;
}
