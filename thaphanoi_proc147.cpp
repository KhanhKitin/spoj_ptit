#include<iostream>
using namespace std;
void in(int k,char a,char b){
	if(k==n){
		cout<<k<<" "<<a<<" "<<b<<endl;
	}
}
void thaphanoi(int n,char a,char b,char c){
	if(n==1) in(n,a,c);
	else{
		thaphanoi(n-1,a,c,b);
		in(n,a,c);
		thaphanoi(n-1,b,a,c);
	}
}
int main(){
	int n;
	char a='A',b='B',c='C';
	cin>>n;
	thaphanoi(n,a,b,c);
}
