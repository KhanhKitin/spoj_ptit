#include<iostream>
using namespace std;
void nhap(int n,long m[]){
	for(int i=1;i<=n;i++){
		cin>>m[i];
	}
}
void tong1(int n,long m[],long c){
	int s=0;
	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<=n;k++){
				if(m[i]+m[j]+m[k]<=c&&m[i]+m[j]+m[k]>s)
					s=m[i]+m[j]+m[k];
			}
		}
	}
	cout<<s<<"\n";
}
main(){
	int test,n;
	long m[10000],c;
	cin>>test;
	while(test--){
		cin>>n>>c;
		nhap(n,m);	
		tong1(n,m,c);
	}
}
/* ham nhap thi can gi phai cho ra ham con */

