#include<stdio.h>
void in(int a[],int n){
for(int i=0; i<n; i++){
printf("%d",a[i]);
}
printf("\n");
}
void sinh(int a[],int n, int i,int b[]){
if(i==n) in(a,n);
else{
for(int j=1; j<=n; j++){
if(b[j]==1){
b[j]=0;
a[i]=j;
sinh(a,n,i+1,b);
b[j]=1;
}
}
}
}
main(){
int n;
scanf("%d",&n);
int a[100],b[100];
for(int i=0; i<n; i++){
a[i]=0;
}
for(int i=1; i<=n; i++ ){
b[i]=1;
}
sinh(a,n,0,b);
}
