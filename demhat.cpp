#include<stdio.h>
int main(){
	int a[100];
	int n,dem=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++){
		if(a[i]!=a[i+1]) dem++;
	}
	printf("%d\n",dem);
}
