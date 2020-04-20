//#include<bits/stdc++.h>
//using namespace std;
//long a[1000001]={0};
//long n,k,b,c;
//int main(){
//	cin>>n>>k;
//	while(k--){
//		cin>>b>>c;
//		while(b<=c){
//			a[b]++;
//			b++;
//		}
//	}
//	sort(a+1,a+1+n);
//	cout<<a[(n+1)/2];
//} 
//#include<stdio.h> 
//int main(){ 
//long s[100001]={0},n,k,z; 
//scanf("%ld %ld",&n,&k); 
//long a,b; 
//for(long i=0;i<k;i++){ 
//scanf("%ld %ld",&a,&b); 
//for(long j=a-1;j<=b-1;j++) s[j]=s[j]+1; 
//} 
//for(long i=0;i<n-1;i++) 
//for(long j=i+1;j<n;j++){ 
//if(s[i]>s[j]) {z=s[j];s[j]=s[i];s[i]=z;} 
//} 
//printf("%ld",s[(n-1)/2]); 
//return (0); 
//} 

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
 int c[1000001]={0};
int main()
{
	int k;
    long n,a,b;
    cin >> n >> k;
    for(int i=0;i<k;i++)
    {
        cin >> a >> b;
        c[a]++;                    //tang vi tri c[a] len 1;
        c[b+1]--;                   // giam vi tri c[b+1] xuong 1;
    }
    for(long i=1;i<n;i++)
        c[i]=c[i]+c[i-1];           //phan tu hien tai bang hien tai + truoc;
    sort(c,c+n);   //sap xep dua vao thu vien algorthm
    cout << c[(n-1)/2];
}
 
