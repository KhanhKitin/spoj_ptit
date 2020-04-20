#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100][100];
	char s[100][100];
	int r,c,dem=0;
	cin>>r>>c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>s[i][j];
			if(s[i][j]=='S') a[i][j]=-1;
			else a[i][j]=0;
		}
	}
	for(int i=1;i<=r;i++){
		int k=1;
		for(int j=1;j<=c;j++){
			if(a[i][j]==-1){
				k=0;
				break;
			}
		}
		if(k==1) 
			for(int j=1;j<=c;j++){
				a[i][j]=1;
		}
	}
	for(int j=1;j<=c;j++){
		int k=1;
		for(int i=1;i<=r;i++){
			if(a[i][j]==-1){
				k=0;
				break;
			}
		}
		if(k==1) for(int i=1;i<=r;i++){
					a[i][j]=1;
			}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(a[i][j]==1){
				dem++;
			}
		}
	}
	cout<<dem;
}
