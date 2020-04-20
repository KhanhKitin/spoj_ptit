#include<stdio.h>
int stn(long  n){
	long  tg=0,m=n;
	while(n!=0){
		tg=tg*10+n%10;
		n/=10;
	}
	if(m==tg) return 1;
	return 0;
}
main(){
	int n;
	scanf("%d",&n);
	int b[n];
	long a[n];
	for(int  i=0;i<n;i++){
		 scanf("%ld",&a[i]);
		 if(stn(a[i])) b[i]=1;
		 else b[i]=0;
	}
	for(long  i=0;i<n;i++){
		if(b[i]==1) printf("YES\n");
	else printf("NO\n");
	}
}
