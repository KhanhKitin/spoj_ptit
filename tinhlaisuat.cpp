#include<iostream>
using namespace std;
int main(){
	int t;
	double n,l,m;
	scanf("%d",&t);
	while(t--){
		int dem=0;
		cin>>n>>l>>m;
		while(n<m){
			n=n+(n*l)/100;
			dem++;
		}
		cout<<dem<<"\n";
	}
}
