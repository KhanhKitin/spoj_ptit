#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int *A=new int [t+5];
    for(int i=1;i<=t;i++)
    {
       cin >> n;
        A[i]=sqrt(n);
    }
    for(int i=1;i<=t;i++)
    cout << A[i] << "\n";
}
