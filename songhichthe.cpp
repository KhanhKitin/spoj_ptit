#include<stdio.h>
int main(){
	int n;
	int dem=0;
	int a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(i<j&&a[i]>a[j]) dem++;
		}
	}
	printf("%d",dem);
}
