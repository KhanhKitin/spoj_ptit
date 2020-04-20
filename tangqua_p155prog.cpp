#include<iostream>
using namespace std;
int main(){
	int a[100001],n,tg;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tg;
		a[tg]=i;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
}
