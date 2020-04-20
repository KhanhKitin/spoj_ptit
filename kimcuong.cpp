#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>> n;
	for(int i=0;i<=n/2;i++){
		int dem1=0;
		for(int j=1;j<=n/2-i;j++){
				cout<<"*";
				dem1++;
		}
		for(int j=1;j<=n-2*dem1;j++){
			cout<< "D";
		}
		for(int j=1;j<=n/2-i;j++){
				cout<<"*";
		}
			cout<<endl;
	}
	
		for(int i=1;i<=n/2;i++){
			int dem=0;
			for(int j=1;j<=i;j++){
				cout<<"*";
				dem++;
			}
			for(int j=1;j<=n-2*dem;j++)
				cout<<"D";
			for(int j=1;j<=i;j++){
				cout<<"*";
			}
			cout<<endl;
		}
	
} 
