#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int d1=0,d2=0,d3=0;
	char s[225];
	do{
		gets(s);
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='#') return 0;
			if(s[i]=='A') d1++;
			if(s[i]=='Y') d2++;
			if(s[i]=='N') d3++;
		}
		if(d1+d1<strlen(s)){
			if(d2>d3) cout<<"yes\n";
			if(d3>d2) cout<<"no\n";
			if(d2==d3) cout<<"tie\n";
		}
		else cout<<"need quorum\n";
		d1=0,d2=0,d3=0;
	}
	while(1);
}
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int d1=0,d2=0,d3=0;
//	char s[225];
//	do{
//		gets(s);
//		for(int i=0;i<strlen(s);i++){
//			if(s[i]=='#') return 0;
//			if(s[i]=='A') d1++;
//			if(s[i]=='Y') d2++;
//			if(s[i]=='N') d3++;
//		}
//		if(d1+d1<strlen(s)){
//			if(d2>d3) printf("yes\n");
//			if(d3>d2) printf("no\n");
//			if(d2==d3) printf("tie\n");
//		}
//		else printf("need quorum\n");
//		d1=0,d2=0,d3=0;
//	}
//	while(1);
//}
