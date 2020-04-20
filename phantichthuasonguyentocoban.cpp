#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
     long n,m,d,v;
     cin>>n;
     d=0;
     while(n%2==0) {n/=2;d++;}
     if(d>0) cout<<"2 "<<d<<endl;
     d=0;
     while(n%3==0) {n/=3;d++;}
     if(d>0) cout<<"3 "<<d<<endl;
     d=0;
     while(n%5==0) {n/=5;d++;}
     if(d>0) cout<<"5 "<<d<<endl;
     m=sqrt(n);
     v=5;
     while(v<=m)
     {
        v=v+2;
        d=0;
        while(n%v==0) {n/=v;d++;}
        if(d>0) cout<<v<<" "<<d<<endl;
        m=sqrt(n);
        v=v+4;
        d=0;
        while(n%v==0) {n/=v;d++;}
        if(d>0) cout<<v<<" "<<d<<endl;
        m=sqrt(n);
     }
     if(n>1) cout<<n<<" "<<1<<endl;
     }
 
