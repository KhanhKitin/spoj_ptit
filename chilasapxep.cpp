//#include<iostream>
//using namespace std;
//void sapxep(int a[],int left,int right){
//	int l=left,r=right,t=a[(left+right)/2];
//	while(l<=r){
//		while(a[l]<t&&l<right) l++;
//		while(a[r]>t&&r>left) r--;
//		if(l<=r){
//			swap(a[l++],a[r--]);
//		}
//		if(l<right) sapxep(a,l,right);
//		if(left<r) sapxep(a,left,r);
//	}
//}
//void timkiem(int a[],int value,int left,int right){
//	while(left<=right){
//		int t=(right+left)/2;
//		if(a[t]==value) printf("%d\n",a[t]);
//		else if(a[t]>value) right=t-1;
//		else left=t+1;
//	}
//}
//int main(){
//	int min,max;
//	int a[100000],b[100000];
//	int n,m;
//	cin >> n >> m;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int j=0;j<m;j++){
//		cin>>b[j];
//	}
//	sapxep(a,0,n-1);
//	for(int i=0;i<n;i++){
//		while(j<m){
//			timkiem(a,b[j],0,n-1);
//			j++;
//		}
//	}
//}
#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000005],b[1000005],c[1000005];
main(){
	long long n,m,max=-1;
	cin>>n>>m;
	for(long long i=0; i<n; i++) {
		cin>>a[i];
		if(max<a[i]) max=a[i];
	}
	for(long long i=0; i<m; i++) cin>>b[i];
	for(int i=1; i<=max; i++) c[i]=0;
	for(int i=0; i<n; i++) c[a[i]]++;
	for(int i=1; i<max; i++) c[i]+=c[i-1];
	for(int i=0; i<m; i++){
		if(b[i]>=max) cout<<n<<endl;
		else{
			cout<<c[b[i]]<<endl;
		}
	}
}
