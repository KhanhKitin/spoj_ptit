#include<iostream>
#include<math.h>
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int x,y,dem=0;
	cin>>x>>y;
	if(nt(y)){
		for(int i=x;i<y;i++){
			if(nt(i)) dem++;
		}
		if(dem==1) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
}
