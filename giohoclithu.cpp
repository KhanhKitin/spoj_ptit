#include<iostream>
using namespace std;
int main(){
	int x,y,n;
	cin>>x>>y>>n;
	int fn,f2=y,f1=x;
	for(int i=3;i<=n;i++){
		fn=f2-f1;
		f1=f2;
		f2=fn;
	}
	cout<<fn;
}

