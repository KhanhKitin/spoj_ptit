#include<iostream>
using namespace std;
int a[100],cot[100],xuoi[100],nguoc[100],n;
int dem=0;
void khoitao(){
	for(int i=1;i<=n;i++){
		cot[i]=1;
	}
	for(int i=1;i<=2*n-1;i++){
		xuoi[i]=1;
		nguoc[i]=1;
	}
}
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinh(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==1&&xuoi[i-j+n]==1&&nguoc[i+j-1]==1){
			a[i]=j;
			cot[j]=0;
			xuoi[i-j+n]=0;
			nguoc[i+j-1]=0;
			if(i==n){
			//	xuat();
				dem++;
			}
			else sinh(i+1);
			cot[j]=1;
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
		}
	}
}
int main(){
	cin>>n;
	khoitao();
	sinh(1);
	cout<<dem;
}
