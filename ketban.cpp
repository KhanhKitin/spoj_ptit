#include<stdio.h>
int main(){
	int n,s,dem=0;
	int a[n];
	scanf("%d%d",&n,&s);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==s) dem++;
		}
	}
	printf("%d",dem);
}

