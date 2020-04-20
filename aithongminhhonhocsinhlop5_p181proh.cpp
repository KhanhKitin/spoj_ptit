#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int d=0;
	long long a,b;
	cin>>a>>b;
	if(a==b){
		cout<<"infinity";
	}
	if(b>a){
		cout<<d;
	}
	else{
		for(int i=1;i<=a;i++){
			if((a-b)%i==0){
				if(i>b) d++;
			}
		}
	}
	cout<<d;
}
