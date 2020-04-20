#include<stdio.h>
int a[10000],b[10000],n;
void nhap(){
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
}
void tao(){
	for(int i=n;i>=1;i--){
		a[i]=i*b[i]-(i-1)*b[i-1];
	}
}
void in(){
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	scanf("%d",&n);
	nhap();
	tao();
	in();
}
