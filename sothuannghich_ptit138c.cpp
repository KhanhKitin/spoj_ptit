#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int dao(char a[]){
	char b[225];
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0) return 1;
	return 0;
}
int main(){
	char s[225];
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++){
      		if(s[i]>=97&&s[i]<=122)
       		 	s[i]=s[i]-32;
   		}
		for(int i=0;i<strlen(s);i++){
			switch(s[i]){
				case 'A''B''C'):{
					s[i]=2;
					break;
				}
				case (s[i]=='D'||s[i]=='E'||s[i]=='F'):{
					s[i]=3;
					break;
				}
				case (s[i]=='G'||s[i]=='H'||s[i]=='I'):{
					s[i]=4;
					break;
				}
				case (s[i]=='J'||s[i]=='K'||s[i]=='L'):{
					s[i]=5;
					break;
				}
				case (s[i]=='M'||s[i]=='N'||s[i]=='O'):{
					s[i]=6;
					break;
				}
				case (s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S'):{
					s[i]=7;
					break;
				}
				case (s[i]=='T'||s[i]=='U'||s[i]=='V'):{
					s[i]=8;
					break;
				}
				case (s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z'):{
					s[i]=9;
					break;
				}
			}
		}
		if(dao(s)) printf("YES\n");
		else printf("NO\n");
	}
}
