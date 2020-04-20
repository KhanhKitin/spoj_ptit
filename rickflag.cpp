#include<stdio.h>
int main(){
	int n,dem=0;
	int a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==0) dem++;
	}
	if(dem==1) printf("YES\n");
	else printf("NO\n");
}
