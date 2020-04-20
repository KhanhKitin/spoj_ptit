#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int t=n/4, h=n/7;
	int x,y;
	for(int i=0; i<=h; i++){
		for(int j=0; j<=t; j++){
			if(7*i+4*j==n){
				x=i; y=j;
				break;
			}
		}
	}
    if(x*7+y*4!=n){
    	printf("-1");
	}
	else{
		for(int i=0; i<y; i++){
			printf("4");
		}
		for(int i=0; i<x; i++){
			printf("7");
		}
	}
}
