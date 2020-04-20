#include<iostream>
using namespace std;
int main(){
	int a,c,s;
	cin>>a>>c;
	s=a*(c-1)+1;
	if((a*c-s)<a) cout<<s;
}
//#include<stdio.h>
//int main(){
//	int a,c,s;
//	scanf("%d%d",&a,&c);
//	s=a*(c-1)+1;
//	if((a*c-s)<a) printf("%d",s);
//}
