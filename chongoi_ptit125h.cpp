#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,dem=1;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='S') dem++;
		else{
			dem++;
			i++;
		}
	}
	if(n>dem) cout<<dem;
	else cout<<n;
}
