//#include<iostream>
//#include<cstring>
//using namespace std;
//int main(){
//	string s;
//	string a,k;
//	getline(cin,s);
//	for(int i=s.length();i>=1;i--){
//		if ((s.length()-i+1)%3==0){
//            k=s[i]+a;
//            a=','+k;
//        }
//        else{
//            a=s[i]+a;
//        }
//	}
//	if(a[1]==','){
//		for(int i=2;i<=a.length();i++){
//			cout<<a[i];
//		}
//	}
//	else cout<<a;
//}
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	string res,k;
	cin>>s;
	res=" ";
	for(int i=s.length()-1;i>=0;i--){
		if((s.length()-i)%3==0){
			k=s[i]+res;
			res=','+k;
		}
		else{
			res=s[i]+res;
		}
	}
	if(res[0]==','){
		for(int i=1;i<=res.length();i++){
			cout<<res[i];
		}
	}
	else{
		cout<<res;
	}
}
