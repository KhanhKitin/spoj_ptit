#include<stdio.h>
long a[100000000];
int main(){
	int n,m,k1,k=1;
	scanf("%d%d",&n,&m);
	scanf("%d",&k1);
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++){
				a[k]=i*j;
				k++;
				}
	for(int k=1;k<=m*n;k++){
		for(int h=m*n;h>k;h--){
			if(a[h-1]>a[h]){
				int t=a[h];
				a[h]=a[h-1];
				a[h-1]=t;
			}
		}
	}
	for(int k=1;k<=m*n;k++){
		if(k==k1) printf("%ld\n",a[k]);
	}
}
