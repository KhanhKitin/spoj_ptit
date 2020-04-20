#include<stdio.h>
int main(){
	int a[9]={1,2,5,10,20,50,100,200,500};
	int t,k,n,dem=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=8;i>=0;i--){
			if(n>=a[i]){
				k=n/a[i];
				n=n-k*a[i];
				dem+=k;
			}
		}		
		printf("%d\n",dem);
		dem=0;
	}
}
