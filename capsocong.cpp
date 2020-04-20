#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int a1,b,a4=0;
	for(int i=0;i<3;i++){
		cin >> a[i];
	}
	for(int i=0;i<3;i++){
		for(int j=2;j>i;j--){
			if(a[j-1]>a[j]){
				swap(a[j-1],a[j]);
			}
		}
	}
	for(int i=0;i<3;i++){
		a1=a[2]-a[1];
		b=a[1]-a[0];
		if(a1==b) a4=a[2]+a1;
		if(a1>b) a4=a[2]-b;
		if(a1<b) a4=a[1]-a1;
	}
	cout<<a4;
}
