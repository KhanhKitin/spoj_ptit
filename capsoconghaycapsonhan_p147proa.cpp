#include<iostream>
using namespace std;
void sapxep(int a[]){
	for(int i=1;i<4;i++){
		for(int j=4;j>i;j--){
			if(a[j-1]>a[j]){
				swap(a[j-1],a[j]);
			}
		}
	}
}
int main(){
	int a[10000];
	int vt,u1=0,u2=0,t1=0,t2=0;
	do{
		for(int i=1;i<=4;i++){
			cin>>a[i];
			if(a[i]==-1) vt=i;
		}
		for(int i=1;i<=4;i++){
			if(a[1]==-1&&a[2]==-1&&a[3]==-1&&a[4]==-1) return 0;
		}
		sapxep(a);
//		for(int i=1;i<=4;i++){
//			cout<<a[i]<<" ";
//		}
		t1=a[4]-a[3];
		t2=a[3]-a[2];
		u1=a[4]/a[3];
		u2=a[3]/a[2];
		if(t1!=t2&&u1!=u2) cout<<"-1";
		if(u1==u2){
			if(vt==1){
				cout<<a[2]/u1;
			}
			if(vt==2){
				cout<<a[3]/u1;
			}
			if(vt==3){
				cout<<a[4]/u1;
			}
			if(vt==4){
				cout<<a[3]*u1;
			}
		}
		if(t1==t2){
			if(vt==1){
				cout<<a[2]-t1;
			}
			if(vt==2){
				cout<<a[3]-t1;
			}
			if(vt==3){
				cout<<a[4]-t1;
			}
			if(vt==4){
				cout<<a[3]+t1;
			}
		}
	}
	while(1);
}
