#include<iostream>
using namespace std;
int main(){
	int a[100001],b[100001];
	int s,n,d=0;
	cin>>s>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
				int k=b[j];
				b[j]=b[j-1];
				b[j-1]=k;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(s>a[i]){
			d++;
			s+=b[i];
		}
		else {
			cout<<"NO";
			break;
		}
	}
	if(d==n) cout<<"YES";
}
