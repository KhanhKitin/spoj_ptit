#include<iostream>
using namespace std;
int main(){
	int s;
	long long c,v0,v1,a,l;
	int d=1;
	cin>>c>>v0>>v1>>a>>l;
	if(c-v0<=0){
		cout<<"1";
		return 0;
	}
	else{
		c=c-v0;
		while(c>0){
			s= v0;
			s+=a;
			if(s<=v1){
				c=c-s+l;
				d++;
			}
			else{
				c=c-v1+l;
				d++;
			}
		}
	}
	cout<<d;
}
