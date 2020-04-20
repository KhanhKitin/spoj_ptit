#include<iostream>
using namespace std;
int main(){
	int n;
	long long x,y,A=0,B=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		A=A|x;
	}
	for(int i=0;i<n;i++){
		cin>>y;
		B=B|y;
	}
	cout<<A+B;
}
