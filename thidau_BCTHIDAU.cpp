#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int sobaiMax=-1;
	int sodiemphatMin=0;
	string nameMax;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int s1,t1,s2,t2,s3,t3,s4,t4;
		string k;
		cin>>k;
		cin>>s1>>t1>>s2>>t2>>s3>>t3>>s4>>t4;
		int diem=0;
		int d=0;
		if(t1>0){
			d++;
			diem=diem+(s1-1)*20+t1;
		}
		if(t2>0){
			d++;
			diem=diem+(s2-1)*20+t2;
		}
		if(t3>0){
			d++;
			diem=diem+(s3-1)*20+t3;
		}
		if(t4>0){
			d++;
			diem=diem+(s4-1)*20+t4;
		}
		if(d>sobaiMax){
			sobaiMax=d;
			nameMax=k;
			sodiemphatMin=diem;
		}
		if(d==sobaiMax){
			if(diem<sodiemphatMin){
				sodiemphatMin=diem;
				nameMax=k;
			}
		}
	}
	cout<<nameMax<<" "<<sobaiMax<<" "<<sodiemphatMin;
}
