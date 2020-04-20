#include<stdio.h>
int main(){
	int a[1000],min,max,t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		min=a[0];
		max=a[0];
		for(int i=0;i<n;i++){
			if(max<a[i]) max=a[i];
			if(min>a[i]) min=a[i];
		}
		printf("%d\n",(max-min)*2);
	}
}
