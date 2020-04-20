//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//int kt(long &k){
//	char s[225];
//	itoa(k,s,10);
//	int n=strlen(s);
//	for(int i=0;i<n;i++){
//		if(s[i]-'0'!=6&&s[i]-'0'!=9) return 0;
//	}
//	return 1;
//}
//int main(){
//	int n;
//	int dem=0;
//	char s[225];
//	scanf("%d",&n);
//	for(long i=1;i<=pow(10,n)-1;i++){
//		if(kt(i)){
//			dem++;
//			printf("%lld\t",i);
//		}
//	}
//	printf("%d",dem);
//}
//#include<stdio.h>
//#include<math.h>
//long long mu(int n){
//	long long s=1;
//	for(int i=1;i<=n;i++){
//		s*=2;
//	}
//	return s;
//}
//main(){
//	int n;
//	long long s=0;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		s+=mu(i);
//	}
//	printf("%lld",s);
//}
#include<iostream>
using namespace std;
long long mu(int n){
	long long s=1;
	for(int i=1;i<=n;i++){
		s*=2;
	}
	return s;
}
int main(){
	long long s=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		s+=mu(i);
	}
	cout<<s;
}

