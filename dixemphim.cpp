#include<stdio.h>
int a[100],n,s,b[100],w,max=0;
void khoitao(){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
int tong(){
	 s=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) s+=b[i];
	}
	return s;
}
void sinh(){
	for(int i=n-1;i>=0;i--){
		if(a[i]==0) {
			a[i]=1;
			for(int k=i+1;k<=n-1;k++)
				a[k]=0;
				break;
		}
	}
}
int final(){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) dem++;
	}
	if(dem==n) return 1;
	return 0;
}
int main(){
	scanf("%d",&w);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	while(final()==0){
		sinh();
		if(tong()<=w&&tong()>max) 
		 max=s;
	}
	printf("%d",max);
}
