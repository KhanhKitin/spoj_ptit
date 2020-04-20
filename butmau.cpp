#include<stdio.h>
int main(){
	int dem=0;
	long long a[4];
	for(int i=0;i<4;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<3;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]==a[j]) dem++;
		}
	}
	if(dem==6) printf("3");
	else if(dem==3) printf("2");
	else printf("%d",dem);
}
