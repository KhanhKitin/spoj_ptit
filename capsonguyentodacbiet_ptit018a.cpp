#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int nt[1000007];
void sangNt(){
	for(int i=2;i*i<=MAX;i++){
		if(nt[i]==0){
			for(int j=2;j<=MAX/i;j++){
				nt[i*j]=1;
			}
		}
	}
	nt[0]=1;
	nt[1]=1;
}
int main(){
	int t;
	cin>>t;
	sangNt();
	while(t--){
		int l,r,d=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(nt[i]==0&&nt[i+6]==0&&i+6<=r) d++;
		}
		cout<<d<<"\n";
	}
}
