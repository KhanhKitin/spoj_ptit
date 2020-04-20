#include<stdio.h>
int main(){
	int n,m,dem=0,s=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
	if((i+j)%5==0) dem++;
	}
}
	printf("%d",dem);
}

