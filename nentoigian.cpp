#include<stdio.h>
int nen(long n){
	int s=0,s1=0;
	while(n){
		s+=n%10;
		n=n/10;
	}
	if(s>0&&s<10) return s;
	if(s>=10) return nen(s);
}
int main(){
	long n;
	 int t;
	 scanf("%d",&t);
	 while(t--){
	 	scanf("%ld",&n);
	 	printf("%d\n",nen(n));
	 }
}
