//#include<iostream>
//using namespace std;
//int main(){
//	int n,m,a,n1=0,m1=0,k,h;
//	cin>>n>>m>>a;
//	while(1){
//		k=n/a;
//		n=n-a;
//		n1++;
//		if(n<=0) break;
//		if(k==0){
//			if(n%a!=0){
//				n1++;
//				break;
//			}
//			break;
//		}
//	}
//	while(1){
//		h=m/a;
//		m=m-a;
//		m1++;
//		if(m<=0) break;
//		if(h==0){
//			if(m%a!=0){
//				m1++;
//				break;
//			}
//			break;
//		}
//	}
////	cout<<n1<<" "<<m1<<"\n";
//	cout<<(n1*m1);
//}
#include<iostream>
using namespace std;
int main(){
	long long n,m,a,n1=0,m1=0;
	cin>>n>>m>>a;
	if(n%a==0){
		n1+=n/a;
	}
	else{
		n1+=n/a;
		n1++;
	}
	if(m%a==0){
		m1+=m/a;
	}
	else{
		m1+=m/a;
		m1++;
	}
	//cout<<n1<<" "<<m1<<"\n";
	cout<<(n1*m1);
}
