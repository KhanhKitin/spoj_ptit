#include<stdio.h>
int a[100],k,n,stop=0;
void khoitao(){
	for(int i=1;i<=k;i++)
	a[i]=i;
}
void in(){
	for(int i=1;i<=k;i++)
		printf("%d ",a[i]);
		printf("\n");
}
void sinh(){
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0) stop=1;
	else  a[i]++;
	int p=a[i];
	while(i<=k) a[i++]=p++;
}
void tohop(){
	while(stop==0){
		in();
		sinh();
	}
}
int main(){
	scanf("%d%d",&n,&k);
	khoitao();
	tohop();
}
