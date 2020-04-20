#include<stdio.h>
int a[1000],n;
void nhap(){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void in(){
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
void sapxep(){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				int t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	nhap();
	sapxep();
	in();
}
