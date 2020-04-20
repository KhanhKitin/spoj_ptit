#include<iostream>
using namespace std;
bool chuaxet[100]={0};
long a[100],c[100][100];
long n,S=0,min1=100000000;
long cmin;
//void kt(){
//	long chiphi=c[a[n]][a[1]];
//	for(int i=2;i<=n;i++)
//		chiphi+=c[a[i-1]][a[i]];
//		if(chiphi<min1) min1=chiphi;
//}
//void sinh(int i){
//	for(int j=1;j<=n;j++){
//		if(chuaxet[j]==0){
//			a[i]=j;
//			chuaxet[j]=1;
//			if(i==n) kt();
//			else sinh(i+1);
//			chuaxet[j]=0;
//		}
//	}
//}
void sinh(int i){
	for(int j=2;j<=n;j++){
		if(chuaxet[j]==0){
			a[i]=j;
			chuaxet[j]=1;
			S+=c[a[i-1]][j];
			if(i==n){
				if(S+c[j][1]<min1) min1=S+c[j][1];
			}
			else if(S+(n-i+1)*cmin<min1) sinh(i+1);
			S-=c[a[i-1]][j];
			chuaxet[j]=0;
		}
		
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
		}
	}
	cmin=c[0][0];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
				if(c[i][j]<cmin){
					cmin=c[i][j];
				}
			}
		}
	}
	a[1]=1;
	sinh(1);
	cout<<min1;
}
