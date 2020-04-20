#include<stdio.h>
#include<string.h>
int main(){
	char s[225];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		for(int j=strlen(s)-1;j>i;j--){
			if(s[j-1]>s[j]){
				char t=s[j-1];
				s[j-1]=s[j];
				s[j]=t;
			}
		}
	}
	puts(s);
}
