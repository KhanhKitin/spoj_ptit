#include<stdio.h>
#include<string.h>
int kt1(char s[]){
	int s1=0;
	for(int i=0;i<strlen(s);i++){
		s1+=(s[i]-'0');
	}
//	return s1;
	if(s1%9!=0) return 0;
	return 1;
}
int kt2(char s[]){
	int k,h,m;
	int n=strlen(s)-1;
	k=s[n]-'0';
	h=s[n-1]-'0';
	m=h*10+k;
	if(m%4!=0) return 0;
	return 1;
}
int main(){
	char s[225];
	int t,s1=0;
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		if(kt1(s)&&kt2(s)) printf("YES\n");
		else printf("NO\n");
	//	printf("%d",kt1(s));
	}
}
