#include<stdio.h>
#include<string.h>
int main(){
	int a[10000]={0};
	int dem=0;
	char s[225];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(a[s[i]]==0){
			a[s[i]]=1;
			dem++;
		}
	}
	if(dem%2==0) printf("CHAT WITH HER!");
	else printf("IGNORE HIM!");
}
