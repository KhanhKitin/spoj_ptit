#include<stdio.h>
int somayman(long n){
	int s;
	while(n){
		s=n%10;
		if(s!=4&&s!=7) return 0;
		n=n/10;
	}
	return 1;
}
int sochiamayman(long n){
	if(n%4==0||n%7==0) return 1;
	if(somayman(n)) return 1;
	return 0;
}
int main(){
	long n;
	scanf("%ld",&n);
	if(sochiamayman(n)) printf("YES\n");
	else printf("NO\n");
}
