#include<stdio.h>
void nhap(int &n,int a[10000]){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void doantang(int &n,int a[10000]){
int b[10000],max=0;
	for(int i=0;i<n;i++){
		b[i]=1;
		for(int j=i;j<n-1;j++){
			if(a[j]<=a[j+1])
				 b[i]++;
			if(a[j]>a[j+1]) break;
		}
		if(b[i]>max) max=b[i];
	}
	printf("%d",max);
}
int main(){
	int n;
	int a[10000];
	scanf("%d",&n);
	nhap(n,a);
	doantang(n,a);
}
