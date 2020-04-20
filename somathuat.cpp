//#include<stdio.h>
//int kt(int n){
//	int k,m,h;
//	while ( n != 0){
//		k = n%10;
//		if (k==1) n = n /10;
//		else {
//			if ( k == 4 ){
//				m=n;
//				h = m % 100;
//					if ( h == 44){
//						h = m % 1000;
//							if ( h == 144) n = n/1000;
//							else return 0;
//					}
//				else if ( h == 14) n = n/100;
//					else return 0;
//			}
//		else return 0;
//		}
//	}
//	if (n == 0) return 1;
//}
//main(){
//	int n;
//	scanf("%d",&n);
//	if (kt(n)==0) printf("NO\n");
//	else printf("YES\n");
//}
#include<iostream>
using namespace std;
bool kt(int n){
	int k,m,h;
	while ( n != 0){
		k = n%10;
		if (k==1) n = n /10;
		else {
			if ( k == 4 ){
				m=n;
				h = m % 100;
					if ( h == 44){
						h = m % 1000;
							if ( h == 144) n = n/1000;
							else return false;
					}
				else if ( h == 14) n = n/100;
					else return false;
			}
		else return false;
		}
	}
	if (n == 0) return true;
}
main(){
	int n;
	cin>>n;
	if (kt(n)==false) printf("NO");
	else printf("YES");
}
