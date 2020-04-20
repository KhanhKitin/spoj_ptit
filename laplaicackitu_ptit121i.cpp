#include<stdio.h>
#include<string.h>
int main(){
	char s[225];
	int t,r,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&k);
		scanf("%d",&r);
		scanf("%s",s);
		printf("%d ",k);
		for(int i=0;i<strlen(s);i++){
			for(int j=1;j<=r;j++){
				printf("%c",s[i]);
			}
		}
		printf("\n");
	}
}
