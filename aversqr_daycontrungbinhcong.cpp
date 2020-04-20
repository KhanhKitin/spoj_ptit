#include<iostream>
using namespace std;
int main(){
	int n,k;
	int a[100001];
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]-k;
	}
	int res=0;
	for(int i=0;i<n;i++){
		long s=0;
		int dem=0;
		for(int j=i+1;j<=n;j++){
			s+=a[j];
			dem++;
			if(s>=0&&dem>res){
				if(res==n){
					cout<<n;
					break;
				}
				res=dem;
			}
		}
	}
	cout<<res;
}

