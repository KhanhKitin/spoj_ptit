#include<iostream>
using namespace std;
int main(){
	string s1;
	cin>>s1;
	while(s1.length()%3!=0){
		s1='0'+s1;
	}
	string s2;
	for(int i=0;i<s1.length();i+=3){
		s2="";
		for(int j=i;j<i+3;j++){
			s2+=s1[j];
		}
		if(s2=="000") cout<<0;
		if(s2=="001") cout<<1;
		if(s2=="010") cout<<2;
		if(s2=="011") cout<<3;
		if(s2=="100") cout<<4;
		if(s2=="101") cout<<5;
		if(s2=="110") cout<<6;
		if(s2=="111") cout<<7;
	}
	return 0;
}
