#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	n=s.length();
	if(n%3==1){
		for(int i=n-1;i>=0;i--){
			s[i+2]=s[i];
		}
		s[0]='0';
		s[1]='0';
		for(int j=0;j<=n+1;j+=3){
			string t;
			t+=s[j];
			t+=s[j+1];
			t+=s[j+2];
			if(t=="000") cout<<0;
			if(t=="001") cout<<1;
			if(t=="010") cout<<2;
			if(t=="011") cout<<3;
			if(t=="100") cout<<4;
			if(t=="101") cout<<5;
			if(t=="110") cout<<6;
			if(t=="111") cout<<7;
		}
	}
	if(n%3==2){
		for(int i=n-1;i>=0;i--){
			s[i+1]=s[i];
		}
		s[0]='0';
		for(int j=0;j<=n;j+=3){
			string t;
			t+=s[j];
			t+=s[j+1];
			t+=s[j+2];
			if(t=="000") cout<<0;
			if(t=="001") cout<<1;
			if(t=="010") cout<<2;
			if(t=="011") cout<<3;
			if(t=="100") cout<<4;
			if(t=="101") cout<<5;
			if(t=="110") cout<<6;
			if(t=="111") cout<<7;
		}
	}
	if(n%3==0){
		for(int j=0;j<=n;j+=3){
			string t;
			t+=s[j];
			t+=s[j+1];
			t+=s[j+2];
			if(t=="000") cout<<0;
			if(t=="001") cout<<1;
			if(t=="010") cout<<2;
			if(t=="011") cout<<3;
			if(t=="100") cout<<4;
			if(t=="101") cout<<5;
			if(t=="110") cout<<6;
			if(t=="111") cout<<7;
		}
	}
}
