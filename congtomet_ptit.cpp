#include<iostream>
using namespace std;
int main(){
	string s;
	do{
		cin>>s;
		if(s=="0") break;
		long long k=0;
		for(int i=0;i<s.length();i++){
			int h=s[i]-'0';
			if(h>4) h--;
			k=k*9+h;
		}
		cout<<s<<": "<<k<<"\n";
	}
	while(1);
}
