#include<stdio.h>
int main(){
	int a[100000],b[100000];
	int n,max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=1;
		for(int j=i;j<n-1;j++){
			if(a[j]<=a[j+1]){
				b[i]++;
			}
			if(a[j]>a[j+1]) break;
		}
		if(b[i]>max) max=b[i];
	}
	printf("%d",max);
}
