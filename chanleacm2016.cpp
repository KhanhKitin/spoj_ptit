#include<stdio.h>
#include<string.h>
int kt(char s[225]){
	for(int i=0;i<(long)strlen(s);i++){
		if(i%2==1&&(s[i]-'0')%2==1||i%2==0&&(s[i]-'0')%2==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	char s[225];
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		if(kt(s)) printf("YES\n");
		else printf("NO\n");
	}
}
