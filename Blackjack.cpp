//#include<stdio.h>
//int main(){
//	int n,t=0;
//	int m;
//	int a[1000];
//	scanf("%d%d",&n,&m);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n-2;i++){
//		for(int j=i+1;j<n-1;j++){
//			for(int k=j+1;k<n;k++){
//				if(a[i]+a[j]+a[k]<=m&&a[i]+a[j]+a[k]>t)
//					t=a[i]+a[j]+a[k];
//			}
//		}
//	}
//	printf("%d",t);
//}
#include<iostream>
using namespace std;
int main(){
	int n,m,t=0;
	int a[1000];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(a[i]+a[j]+a[k]<=m&&a[i]+a[j]+a[k]>t)
					t=a[i]+a[j]+a[k];
			}
		}
	}
	cout<<t;
}
