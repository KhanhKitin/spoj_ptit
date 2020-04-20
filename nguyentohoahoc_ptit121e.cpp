#include<bits/stdc++.h>
using namespace std;
stack<int> t;
int main(){
	string s;
	getline(cin,s);
	int h=0; 
	for(int i=0;i<s.length();i++){
		if(s[i]=='C'){
			t.push(12);
		}
		if(s[i]=='H'){
			t.push(1);
		}
		if(s[i]=='O'){
			t.push(16);
		}
		if(s[i]=='('){
			t.push(0);
		}
		if(s[i]==')'){
			long u=0;
			while(t.top()!=0){ // cong cho den khi gap ( mang gia tri 0
				u+=t.top();
				t.pop();
			}
			t.pop();
			t.push(u);
		}
		if(s[i]>='2'&&s[i]<='9'){
			long k=0;
			int m;
			m=t.top();
			s[i]=s[i]-'0';
			k=s[i]*m;
			t.pop();
			t.push(k);
		}
	}
	while(t.empty()!=1){
		h+=t.top();
		t.pop();
	}
	cout<<h; 
} 
