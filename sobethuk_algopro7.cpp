#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long n,k,h;
//int binaryseach(long long x){
//	long long left=0,right=n-1,mid;
//	while(left<=right){
//		if(a[mid]==x) return mid;
//		else if(a[mid]>x) {
//			right=mid-1;
//		}
//		else left=mid+1;
//	}
//}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
	cout<<a[k];
}
