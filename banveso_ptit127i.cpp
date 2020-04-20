//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int a[100][1000],b[100001];
//	int c[100001]={0};
//	int n,k=0,dem=0;
//	do{
//		cin>>n;
//		if(n==0) return 0;
//		for(int i=0;i<n;i++){
//			for(int j=0;j<6;j++){
//				cin>>a[i][j];
//			}
//		}
//		if(n<9){
//			cout<<"No\n";
//		}
//		else {
//			for(int i=0;i<n;i++){
//				for(int j=0;j<6;j++){
//					b[k]=a[i][j];
//					k++;
//				}
//			}
//		sort(b,b+k);
//		for(int h=0;h<k;h++){
//			cout<<b[h]<<" ";
//		}
//			for(int h=0;h<k;h++){
//				if(b[h]>=1&&b[h]<=49){
//					if(c[b[h]]==0){
//						c[b[h]]++;
//						dem++;
//					}
//				}
//			}
//			if(dem==49) cout<<"Yes\n";
//			else cout<<"No\n";
//		}
//	}
//	while(1);
//}
#include<bits/stdc++.h>
using namespace std;
int kt(int a[],int n){
	int j=1;
	for(int i=0;i<6*n;i++){
		if(a[i]==j){
			j++;
		}
		if(j==50) return 1;
	}
	return 0;
	
}
main(){
	int n;
	do{
		cin>> n;
		if(n==0) break;
		int a[6*n];
		for(int i=0;i<6*n;i++)
			cin>> a[i];
		if(n<9) cout<<"No"<<endl;
		else{
			sort(a,a+6*n);
			if(kt(a,n)) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
				
		}
	}while(n!=0);
}
