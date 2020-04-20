#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,k=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s=="++X") ++k;
		if(s=="X++") k++;
		if(s=="--X") --k;
		if(s=="X--") k--;
	}
	cout<<k;
}
