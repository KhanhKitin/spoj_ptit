#include<iostream>
#include<math.h>
using namespace std;
long long d(long long xa,long long ya,long long xb,long long yb){
 	return sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
}
int main(){
	long long xA,yA,xB,yB;
	int n;
	long long t=0;
	cin>>n;
	while(n--){
		cin>>xA>>yA>>xB>>yB;
		if(yA>0&&yB>0||yA<0&&yB<0) {
			t=d(xA,-yA,xB,yB);
		}
		else {
			t=d(xA,yA,xB,yB);
		}
		cout<<t<<"\n";
		t=0;
	}
}
