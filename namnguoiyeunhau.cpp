#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1000];
	int s=0;
	for(int i = 0 ; i < 5 ; i++ ){
		cin >> a[i];
	}
	for(int i = 0 ; i < 5 ; i++){
		s += a[i];
	}
	cout<<(s==0||s%5?-1:s/5);
}	
