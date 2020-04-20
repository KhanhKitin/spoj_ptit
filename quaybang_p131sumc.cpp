#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,d,k1,k2,k3,k4,max,dem=0;
	cin>>a>>b>>c>>d;
	k1=abs((a/c)-(b/d));
	k2=abs((c/d)-(a/b));
	k3=abs((d/b)-(c/a));
	k4=abs((b/a)-(d/c));
	max=k1;
//	cout<<k1<<" "<<k2<<" "<<k3<<" "<<k4;
	if(max<k2){
		max=k2;
		dem=1;
	}
	if(max<k3){
		max=k3;
		dem=2;
	}
	if(max<k4){
		max=k4;
		dem=3;
	}
//	cout<<max;
	cout<<dem;
}
