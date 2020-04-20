#include<iostream>
using namespace std;
int kt(int n){
	int s=0;
	while(n){
		s+=n%10;
		n=n/10;
	}
	return s;
}
int main()
{
	long t=0;
    int n;
    cin>>n;
    if(((n%4==0)&&(n%100!=0))||(n%400==0)){
    	t=366*kt(n)+1556+2041;
	}
    else{
    	t=365*kt(n)+1554+2030;
	}
	cout<<t;
}  
