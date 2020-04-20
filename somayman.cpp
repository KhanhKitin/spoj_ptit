#include<stdio.h>
#include<string.h>
int kt(char s[]){
	long long s1=0;
	for(int i=0;i<strlen(s);i++){
		s1+=s[i]-'0';
	}
	if(s1==0) return 0;
	if(s1==9||s1%9==0) return 1;
	return 0;
}
int main(){
	int t;
	char s[225];
	scanf("%d",&t);
	while(t--){
		scanf("%s",&s);
		if(kt(s)) printf("1\n");
		else printf("0\n");
	}
}

