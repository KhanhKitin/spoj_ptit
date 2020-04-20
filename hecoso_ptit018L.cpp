#include<bits/stdc++.h>
using namespace std;
void chuyen(long coso,long n){
	string s;
	long sodu=0,h=0;
	int i=0;
	while(n>0){
		sodu=n%coso;
		if(sodu<10) s[i]=sodu+'0';
		else{
			s[i]='A'+(sodu-10);
		}
		i++;
		n=n/coso;
	}
	s[i]='\0';
	for(int k=i-1;k>=0;k--){
		if(s[k]=='A'){
			h=h+(10*10);
		}
		else if(s[k]=='B'){
			h=h+(11*11);
		}
		else if(s[k]=='C'){
			h=h+(12*12);
		}
		else if(s[k]=='D'){
			h=h+(13*13);
		}
		else if(s[k]=='E'){
			h=h+(14*14);
		}
		else if(s[k]=='F'){
			h=h+(15*15);
		}
		else{
			h=h+(s[k]-'0')*(s[k]-'0');
		}
	}
	cout<<h<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,b;
		cin>>b>>n;
		chuyen(b,n);
	}
}

