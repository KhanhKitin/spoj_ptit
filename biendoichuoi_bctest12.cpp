#include<stdio.h>
#include<string.h>
int main(){
	char s[225];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=65&&s[i]<=90){
			s[i]=s[i]+32;
		}
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='i'&&s[i]!='e'&&s[i]!='u'){
			printf(".%c",s[i]);
		}
	}
}
