#include<iostream>
#include<string>
using namespace std;
struct sinhnhat{
	string hoten;
	int dd,nn,yyyy;
};
int main(){
	int n;
	struct sinhnhat sn[100];
	long long a[100];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sn[i].hoten>>sn[i].dd>>sn[i].nn>>sn[i].yyyy;
		a[i]=(sn[i].dd+30*sn[i].nn+365*sn[i].yyyy);
	}
	long long max=0;
	long long min=1e9;
	int max_vt,min_vt;
	for(int i=1;i<=n;i++){
		if(a[i]>max){
			max=a[i];
			max_vt=i;
		}
		if(a[i]<min){
			min=a[i];
			min_vt=i;
		}
	}
	cout<<sn[max_vt].hoten<<"\n"<<sn[min_vt].hoten;
}
