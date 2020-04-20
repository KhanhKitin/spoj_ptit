#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	long long x,y,z,k,h,q; 
	while(t--){
		scanf("%lld%lld%lld",&x,&y,&z);
		k=x*y*z;
		h=sqrt(k);
		q=(h/x+h/y+h/z);
		printf("%lld\n",4*q);
	}
}
//using namespace std;
//int main(){
//	int t;
//	cin >> t;
//	long long x,y,z,k,h,q; 
//	while(t--){
//		cin >> x >> y >> z;
//		k=x*y*z;
//		h=sqrt(k);
//		q=(h/x+h/y+h/z);
//		cout << 4*q << "\n";
//	}
//}
