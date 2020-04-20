#include<stdio.h>
int main(){
	int n,s,k,dem=0;
	int a[100];
	scanf("%d",&n);
	scanf("%d",&s);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
	for(int i=n-1;i>=0;i--){
		if(s>=a[i]){
			k=s/a[i];
			s=s-k*a[i];
			dem+=k;
		}
	}
	if(s==0) printf("%d\n",dem);
	if(s>0) printf("-1");
}
