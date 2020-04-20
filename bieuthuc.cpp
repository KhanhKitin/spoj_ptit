//#include<iostream>
//using namespace std;
//void sapxep(long long a[],long long left,long long right){
//	int l=left,r=right,t=a[(left+right)/2];
//	while(l<=r){
//		while(a[l]<t&&l<right) l++;
//		while(a[r]>t&&r>left) r--;
//		if(l<=r){
//			swap(a[l++],a[r--]);
//		}
//	}
//	if(left<r) sapxep(a,left,r);
//	if(l<right) sapxep(a,l,right);
//}
//int main(){
//	long long a[100000];
//	long long n,k,s=0,dem=0;
//	cin>>n>>k;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sapxep(a,0,n-1);
//	for(int i=n-1;i>=0;i--){
//		if(dem<=k){
//			s+=a[i];
//			dem++;
//		}
//		else {
//			s-=a[i];
//		}
//	}
//	cout<<s;
//}
#include<stdio.h>
#include<algorithm>
using namespace std;
void quicksort(int a[],int left, int right){
	int l=left, r=right, temp=a[(left+right)/2];
	while(l<=r){
		while(a[l]<temp && l<right) l++;
		while(a[r]>temp && r>left) r--;
		if(l<=r){
			swap(a[l++],a[r--]);
		}
	}
	if(left<r) quicksort(a,left,r);
	if(l<right) quicksort(a,l,right);
}
main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	quicksort(a,1,n-1);
	reverse(a+1,a+n);
//	for(int i=0;i<n;i++) printf("%d ",a[i]);
	long long s=0;
	for(int i=0;i<=k;i++) s+=a[i];
	for(int i=k+1;i<n;i++) s-=a[i];
	printf("%lld",s);
}


