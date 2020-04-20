#include<stdio.h>
#include<string.h>
int main(){
	int n,sd1=0,sd2=0;
	char s[225],s1[225],s2[225];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s);
		if(i==0) {
			strcpy(s1,s);
		}
		if(strcmp(s1,s)==0){
			sd1++;
		}
		else {
			if(sd2==0){
				strcpy(s2,s);
				sd2++;
			}
			else sd2++;
		}
	}
	if(sd1>sd2) printf("%s",s1);
	else printf("%s",s2);
}
