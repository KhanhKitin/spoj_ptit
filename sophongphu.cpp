#include<stdio.h>
int tongcacuoc(int n){
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0) {
			s+=i;
		}
	}
		if(s>n) return 1;
		return 0;
}
int main(){
	int dem=0;
	int l,r;
	scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++){
		if(tongcacuoc(i)) dem++;
	}
	printf("%d",dem);
}
