#include<stdio.h>
 
void xuat(long k)
{
    k--;
    if(k==0) {printf("4");return;}
    if(k==1) {printf("7");return;}
    xuat(k/2);
    printf(k%2?"7":"4");
}
 
int main()
{
    long k;
    scanf("%ld",&k);
    xuat(k);    
}
