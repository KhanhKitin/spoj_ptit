#include<stdio.h>
int main(){
	int n,x,sl,dem=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sl=0;
		for(int j=1;j<=3;j++){
			scanf("%d",&x);
			if(x==1) sl++;
		}
		if(sl>1) dem++;
	}
	printf("%d",dem);
}


