#include<iostream>
using namespace std;
int main(){
	int n,x,y,k=0;
	int a[100][100];
	for(int i=0;i<=23;i++){
		for(int j=0;j<=59;j++){
			a[i][j]=0;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		a[x][y]++;
		k=max(k,a[x][y]);
	}
	cout<<k;
}

