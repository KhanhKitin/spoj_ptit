#include<iostream>
using namespace std;
int main(){
	long a[400000];
	long dem=0,n;
	cin>>n;
	long x=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(a[i]==x){
			x--;
		}
		else dem++;
	}
	cout<<dem;
	return 0;
}

