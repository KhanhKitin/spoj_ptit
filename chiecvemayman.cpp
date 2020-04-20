#include<bits/stdc++.h>
using namespace std;
//int kt1(char s[],int n){
//	for(int i=0;i<n;i++){
//		if(s[i]!='4'&&s[i]!=7) return 0;
//	}
//	return 1;
//}
int kt2(char s[],int n){
	int s1=0,s2=0;
	for(int i=0;i<n/2;i++){
		s1+=s[i]-'0';
	}
	for(int i=n/2;i<n;i++){
		s2+=s[i]-'0';
	}
//	if(n%2!=0){
//			s1+=s[n/2]-'0';
//		}
		if(s1==s2) return 1;
		return 0;
}
int main(){
	char s[225];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	for(int i=0;i<n;i++){
		if(s[i]!='4'&&s[i]!='7') {
			cout<<"NO";
			return 0;
		}
	}
	if(kt2(s,n)) cout<<"YES";
	else cout<<"NO";
}
//#include<bits/stdc++.h>
//using namespace std;
//int kt1(char s[225],int n){
//	for(int i=1;i<=n;i++){
//		if(s[i]!='4'&&s[i]!='7') return false;
//	}
//	return true;
//}
//int kt2(char s[225],int n){
//	int s1=0,s2=0;
//	for(int i=1;i<=n/2;i++){
//		s1+=s[i]-'0';
//	}
//	for(int i=(n/2)+1;i<=n;i++){
//		s2+=s[i]-'0';
//	}
//	if(s1==s2) return 1;
//	return 0;
//}
//int main(){
//	int n;
//	char s[225];
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>s[i];
//	}
//	if(kt1(s,n)&&kt2(s,n)) cout<<"YES";
//	else cout<<"NO";
//}

