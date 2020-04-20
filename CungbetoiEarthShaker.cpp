#include<stdio.h>
int main(){
	int a[5],b[5];
	int x,s;
	int t;
	scanf("%d%d",&x,&s);
	t=x*s;
	for(int i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=4;i++){
		printf("%d ",a[i]-t);
	}
}
