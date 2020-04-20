#include<stdio.h>
int main(){
	int a[200000];
	int n,t,b,c,i,dem=0;
	scanf("%d",&n);
	scanf("%d",&t);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(t--){
		scanf("%d%d",&b,&c);
		for(int i=0;i<n;i++){
			if(a[i]>=b&&a[i]<=c)
			dem++;
		}
		printf("%d\n",dem);
	}
}
