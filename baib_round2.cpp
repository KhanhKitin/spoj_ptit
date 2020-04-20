#include<iostream>
using namespace std;
long long a[100000],b[100000],n;
int s=1,Min=10000000,h=0;
int kiemtra(){
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			d++;
		}
	}
	if(d==3) return 1;
	return 0;
}
void in(){
	for(int i=0;i<n;i++){
		if(a[i]==1) {
		//	cout<<b[i];
			s*=b[i];
		}
	}
//	cout<<"\n";
}
void sinh(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(kiemtra()==1){
				in();
				if(s<=Min){
				//cout<<" "<<s<<" "<<"\n";
				if(s==Min){
					h++;
				}
					Min=s;
					s=1;
				}
			}
		}
		else sinh(i+1);
	}
}



int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sinh(1);
	cout<<h;
}
