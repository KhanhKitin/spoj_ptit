#include<bits/stdc++.h>
using namespace std;
class Gio{
	public:
		int s;
		int f;
};
int cmp(Gio a,Gio b){
	if(a.f>b.f) return 0;
	return 1;
}
int main(){
	Gio h[10004];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h[i].s>>h[i].f;
	}
	sort(h,h+n,cmp);
	int d=0;
	int x=h[0].s;
	for(int i=0;i<n;i++){
		if(x<=h[i].s){
			d++;
			x=h[i].f;
		}
	}
	cout<<d;
}
