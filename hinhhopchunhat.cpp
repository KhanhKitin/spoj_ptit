#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b,c;
	double t,k;
	cin>>a>>b>>c;
	t=round(sqrt(a*b*c));
	k=(t/a+t/b+t/c);
	cout<<round(4*k);
}
