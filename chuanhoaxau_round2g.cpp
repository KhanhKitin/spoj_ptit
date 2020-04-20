#include<stdio.h>
#include<string.h>
int main(){
	int d1=0,d2=0;
	char s[225];
	gets(s);
	int n=strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]>=97&&s[i]<=122) d1++;
		if(s[i]>=65&&s[i]<=90) d2++;
	}
	if(d1>=d2){
		for(int i=0;i<n;i++){
			if(s[i]>=65&&s[i]<=90){
				s[i]=s[i]+32;
			}
		}
	}
	else {
		for(int i=0;i<n;i++){
			if(s[i]>=97&&s[i]<=122){
				s[i]=s[i]-32;
			}
		}
	}
	puts(s);
}
