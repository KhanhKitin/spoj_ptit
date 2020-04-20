#include<iostream>
using namespace std;
int main(){
	long x,a,b,v;
	cin >> a >> b >> v;
	x=(v-b)/(a-b);
	if((v-b)%(a-b)==0) cout << x;
	else cout << x+1;
}
