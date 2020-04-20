#include<stdio.h>
int kt(int a,int b,int c){
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) return 1;
	return 0;
}
int main(){
	int a,b,c;
	do{
		scanf("%d%d%d",&a,&b,&c);
		if(a==0||b==0||c==0) break;
		if(kt(a,b,c)) printf("right\n");
		else printf("wrong\n");
	}
	while(a!=0&&b!=0&&c!=0);
}
