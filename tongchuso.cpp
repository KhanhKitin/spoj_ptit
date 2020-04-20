#include<stdio.h>
#include<string.h>
int main(){
	int dem=0,t;
	char s[1000000];
		long long tong=0;
		scanf("%s",s);
		if(strlen(s)==1) dem==0;
		else {
			for(int i=0;i<strlen(s);i++){
				long long so=s[i]-'0';
				tong+=so;
			}
			if(tong<10) dem=1;
			dem=1;
			while(tong>=10){
				long long s=0;
				while(tong){
					long long tam=tong;
					tam=tam%10;
					s+=tam;
					tong=tong/10;
				}
				tong=s;
				dem++;
			}
		}
			printf("%d",dem);
}
