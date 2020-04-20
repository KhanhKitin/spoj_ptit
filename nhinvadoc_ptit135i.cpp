#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s);
		int a=0;
		while(a<strlen(s)){
			char t=s[a];
			int dem=0;
			int j=0;
			while(t==s[a+j]){
				dem++;
				j++;
			}
			printf("%d%c",dem,t);
			a+=j;
		}
		printf("\n");
	}
}
