#include<stdio.h>
int nghichDao(int n){
	int tg=0;
	while(n){
		tg=tg*10+n%10;
		n=n/10;
	}
	return tg;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(nghichDao(a)>nghichDao(b)) printf("%d",nghichDao(a));
	if(nghichDao(a)<nghichDao(b))  printf("%d",nghichDao(b));
}
