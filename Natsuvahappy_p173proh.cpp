#include<stdio.h>
int main(){
	int t;
	int n,dem=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n/2;i++){
			if(n%(i*2)==0) 
			dem++;
		}
	printf("%d\n",dem);
		dem=0;
	}
}
