#include<stdio.h>
int main(){
	int a[100][100];
	int n,dem=1;
	scanf("%d",&n);
	if(n==1){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][j]=1;
			}
		}
	}
	for(int k=0;k<=n*n-2;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i+j==k&&k%2==0)	a[j][i]=dem++;
				else if(i+j==k&&k%2==1) a[i][j]=dem++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
