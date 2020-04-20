#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	int x,y;
	cin >> a >> b >> c;
	x=b-a;
	y=c-b;
	d=max(x,y);
	cout << d-1;
}
