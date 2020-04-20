#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100000001];
void sapxep(long long a[100],int left,int right){
	int l=left,r=right,t=a[(left+right)/2];
	while(l<=r){
		while(a[l]<t&&l<right) l++;
		while(a[r]>t&&r>left) r--;
		if(l<=r){
			swap(a[l++],a[r--]);
		}
	}
	if(left<r) sapxep(a,left,r);
	if(l<right) sapxep(a,l,right);
}
int main(){
	int d=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]<a[i+1]) d++;
	}
//	sort(a,a+n);
	sapxep(a,1,n);
//	in(a,n);
	int dem=0;
	for(int i=1;i<=n;i++){
		if(a[i+1]>a[i]){
			dem++;
		}
	}
//	cout<<dem;
	cout<<max(d,dem);
}

