#include<stdio.h>
int a[100],n,stop=0;
void khoitao(){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
void xuat(){
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
		printf("\n");
}
void sinh(){
	int i=n-1;
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==-1) stop=1;
	else a[i]=1;
}
void chuongtrinh(){
	stop=0;
	while(stop==0){
		xuat();
		sinh();
	}
}
int main(){
	scanf("%d",&n);
	khoitao();
	chuongtrinh();
}
