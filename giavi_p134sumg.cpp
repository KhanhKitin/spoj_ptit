#include<iostream>
#include<cmath>
using namespace std;
int a[11],n;
long long s[11],b[11];
long long S=1,C=0, Min=1000000000;
void kt(){
	S=1,C=0;
	int t=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			t=1;
			if(s[i]!=0) S*=s[i];
			C+=b[i];
		}
	}
	if(t==1){
		long d=S-C;
		if(d<0) d=d*(-1);
		if(d<Min) Min=d; 
	}
}
void sinh(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-1) kt();
		else sinh(i+1);
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i]>>b[i];
	}
	if(n==1){
		Min=s[0]-b[0];
		if(Min<0) Min=Min*(-1);
		cout<<Min;
	}
	else{
		sinh(0);
		cout<<Min;
	}
}
