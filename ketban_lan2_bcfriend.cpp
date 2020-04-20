#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long n,b;
int binaryseach(long long x){
	long long left=0,right=n-1,mid;
	while(left<=right){
		mid=(right+left)/2;
		if(a[mid]==x) return mid;
		else if(a[mid]>x) {
			right=mid-1;
		}
		else left=mid+1;
	}
}
int main(){
	int dem=0;
	cin>>n>>b;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(binaryseach(b-a[i])!=0){
			dem++;
		}
	}
	cout<<dem;
}

