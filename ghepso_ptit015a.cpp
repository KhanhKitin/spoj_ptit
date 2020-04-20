#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int a[100000];
	string s1,s2,s3;
	int k;
	cin>>k;
	while(k--){
		int a1,a2,a3;
		cin>>s1>>s2>>s3;
		a1=s1.length();
		a2=s2.length();	
		a3=s3.length();
		int n=a1+a2+a3;
		for(int i=0;i<a1;i++){
			a[i]=s1[i]-'0';
		}
		for(int i=0;i<a2;i++){
			a[a1]=s2[i]-'0';
			a1++;
		}
		for(int i=0;i<a3;i++){
			a[a1]=s3[i]-'0';
			a1++;
		}
		sort(a,a+n,greater<int>());
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}
