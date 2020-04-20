#include<iostream>
using namespace std;
int main(){
	int n,a=0;
	int l[100001],r[100001];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l[i]>>r[i];
	}
	int max=l[1];
	int min=l[1];
	for(int i=1;i<=n;i++){
		if(l[i]>max) max=l[i];
		if(r[i]>max) max=r[i];
	}
	for(int i=1;i<=n;i++){
		if(l[i]<min) min=l[i];
		if(r[i]<min) min=r[i];
	}
//	cout<<min<<" "<<max<<"\n";
	for(int i=1;i<=n;i++){
		if(l[i]==min&&r[i]==max){
			cout<<i;
			return 0;
		}
		else a=1;
	}
	if(a==1) cout<<-1;
	
}

