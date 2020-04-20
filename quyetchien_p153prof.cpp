#include<stdio.h>
//#include "conio.h"
#define M 400001
 
int main(){
    long n, tg, i, j, kq=0;
    int *a;
    a= new int[M];
    for (i=0; i<M; i++)
        a[i]=0;
    scanf("%ld",&n);
    //Radiant
    for (i=0; i<n; i++){
        scanf("%ld",&tg);
        a[tg]=1;
    }
    //Dire
    for (i=0; i<n; i++){
        scanf("%ld",&tg);
        a[tg]=2;
    }
 
    i=M-1, j=M-1;
    while (i>=0 && j>=0){
          //Tim Dire
          for (; i>=0; i--)
              if (a[i]==2)
                 break;
          //Tim Radiant
          for (; j>=0; j--)
              if (a[j]==1 && j< i){
                 kq++;
                 break;
              }
          i--;
          j--;
    }
    printf("%ld",kq);
    //getch();
}
