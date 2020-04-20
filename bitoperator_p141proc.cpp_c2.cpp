#include<stdio.h>
#include<string.h>
int main(){
	int n,k=0;
	char s[225];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",s);
		for(int j=0;j<strlen(s);j++){
			if(s[j]=='+'){
				k++;
				break;
			}
			else if(s[j]=='-'){
				k--;
				break;
			}
		}
	}	
	printf("%d",k);
}
