#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int x,y;
	int f[100][100];
	x=a.length();
	y=b.length();
	for(int i=0;i<=x;i++){
		f[i][0]=0;
	}
	for(int j=0;j<=y;j++){
		f[0][j]=0;
	}
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			if(a[i]==b[j]){
				f[i][j]=f[i-1][j-1]+1;
			}
			else{
				f[i][j]=max(f[i-1][j],f[i][j-1]);
			}
		}
	}
	cout<<f[x][y];
}
