#include<iostream>
using namespace std;
void nhap(int a[50],int &n){
	n=8;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int kiemtra(int a[50], int &n)
{
int k=0;	
for (int i=0; i<n-1; i++)
{

if (k != 1 && a[i] < a[i+1])
	k= k+1;
if (k != 2 && a[i] > a[i+1])	
	k = k+2;
}
return k;	
}
main(){
	int a[50],n;
		nhap(a,n);
		if(kiemtra(a,n)==1) cout << "ascending\n";
		else if(kiemtra(a,n)==2) cout << "descending\n";
		else if(kiemtra(a,n)!=1&&kiemtra(a,n)!=2) cout << "mixed\n";
}

