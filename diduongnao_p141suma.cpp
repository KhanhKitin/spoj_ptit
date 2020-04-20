#include<iostream>
using namespace std;
int main(){
	long long x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	long long ccw;
	ccw=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	if(ccw>0) cout<<"LEFT";
	else if(ccw<0) cout<<"RIGHT";
	else cout<<"TOWARDS";
}
