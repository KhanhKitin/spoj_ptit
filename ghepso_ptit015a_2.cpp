#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int a[100000];
	string s1,s2,s3;
	int k;
	cin>>k;
	while(k--){
		cin>>s1>>s2>>s3;
		for(int j=0;j<=9;j++){
			a[j]=0;
		}
		for(int i=0;i<s1.length();i++){
			int so=s1[i]-'0';
			a[so]++;
		}
		for(int i=0;i<s2.length();i++){
			int so=s2[i]-'0';
			a[so]++;
		}
		for(int i=0;i<s3.length();i++){
			int so=s3[i]-'0';
			a[so]++;
		}
		for(int i=9;i>=0;i--){
			for(int j=0;j<a[i];j++){
				cout<<i;
			}
		}
		cout<<endl;
	}
}
