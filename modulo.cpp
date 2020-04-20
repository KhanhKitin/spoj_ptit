#include<stdio.h>
int main(){
	int a[10],b[10],c[10]={0};
	int dem=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		b[i]=a[i]%42;
	}
	for(int i=0;i<10;i++){
		if(c[i]==0){
			dem++;
			for(int j=i+1;j<10;j++){
				if(b[j]==b[i]){
					c[j]=1;
				}
			}
		}
	}
	printf("%d",dem);
}
