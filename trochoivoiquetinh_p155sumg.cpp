#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int l=1;
	while(1){
		if(n==0||m==0) break;
		n--;
		m--;
		if(l==1) l=2;
		else l=1;
	}
	if(l==1) cout<<"Wilshere";
	else cout<<"Xavi";
}
