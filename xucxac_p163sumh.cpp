#include<bits/stdc++.h>
using namespace std;
int main(){
	int c[]={1,2,3,4,5,6};
	int a,b,k1,k2,d1=0,d2=0,d3=0;
	cin>>a>>b;
	for(int i=0;i<6;i++){
		k1=abs(c[i]-a);
		k2=abs(c[i]-b);
		if(k1<k2) d1++;
		else if(k1==k2) d2++;
		else d3++;
	}
	cout<<d1<<" "<<d2<<" "<<d3;
}
