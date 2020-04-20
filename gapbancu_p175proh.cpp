#include<iostream>
using namespace std;
int main(){
	long long l1,l2,r1,r2,k,kq=0;
	cin>>l1>>r1>>l2>>r2>>k;
	if(l1>=l2&&r1<=r2){
		kq=r1-l1+1;
		if(k>=l1&&k<=r1) kq--;
	}
	if(l1<=l2&&r1>=r2){
		kq=r2-l2+1;
		if(k>=l2&&k<=r2) kq--;
	}
	if(l1>=l2&&l1<=r2&&r1>=r2){
		kq=r2-l1+1;
		if(k>=l1&&k<=r2) kq--;
	}
	if(l1<=l2&&l2<=r1&&r1<=r2){
		kq=r1-l2+1;
		if(k>=l2&&k<=r1) kq--;
	}
	cout<<kq;
}
