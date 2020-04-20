#include<stdio.h>
void ucln(long long a,long long b){
	long long x=a*b;
     int temp;
     while (b != 0) 
      {
          temp = a%b;
          a = b;
          b = temp;
     }
	printf("%lld ",a);
	printf("%lld\n",x/a);
}
int main(){
	long long a,b;
	do{
		scanf("%lld%lld",&a,&b);
		if(a==0||b==0) return 0;
		ucln(a,b);
	}
	while(a!=0&&b!=0);
}
