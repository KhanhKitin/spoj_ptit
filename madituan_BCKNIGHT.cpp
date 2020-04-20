#include<iostream>
using namespace std;
int h[50][50]={0},n,x,y,u,v;
int stop=0;
int a[8] = {-2, -2, -1, -1,  1, 1,  2, 2};
int b[8] = {-1,  1, -2,  2, -2, 2, -1, 1};
void xuat(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<h[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Try(int i,int x,int y){
	for(int k=0;k<=7&& stop !=0;k++){
		u = x + a[k];
		v = y + b[k];
		if(u>=0&&v>=0&&u<n&&v<n&&h[u][v]==0){
			h[u][v]=i;
			if(i<=n*n){
				Try(i+1,u,v);
			}
			else{
				xuat();
				stop=1;
			} 
		}
		h[u][v]=0;
	}
}
int main(){
	cin>>n>>x>>y;
	Try(0,x,y);
}
