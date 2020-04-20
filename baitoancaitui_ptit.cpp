#include<iostream>
using namespace std;
int x[100],w[100],v[100];
int n,b,V,Max=0;
void sinh(int i){
	for(int j=1;j>=0;j--){
		x[i]=j;
		V+=v[i]*x[i];
		b=b-w[i]*x[i];
		if(i==n){
			if(b>=0&&V>Max) Max=V;
		}
		else if(V+(v[i+1]*b)/w[i+1]>Max) sinh(i+1);
		V-=v[i]*x[i];
		b+=w[i]*x[i];
	}
}
int main(){
	cin>>n>>b;
	for(int i=1;i<=n;i++){
		cin>>w[i];
		cin>>v[i];
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if((double)(v[i]/w[i])<(double)(v[j]/w[j])){
				swap(v[i],v[j]);
				swap(w[i],w[j]);
			}
		}
	}
	sinh(1);
	cout<<Max;
}
