#include<iostream>
using namespace std;
main(){
	int t,n,x,y;
	cin>> t;
	while(t--){
		cin>> n >>x >> y;
		int gt=1;
		int a[n][n];
		int h=0	,c=n-1;
		while(gt<=n*n){
			for(int i=h;i<=c;i++){
				a[h][i]=gt;
				gt++;
			}
			for(int i=h+1;i<=c;i++){
				a[i][c]=gt;
				gt++;
			}
			for(int i=c-1;i>=h;i--){
				a[c][i]=gt;
				gt++;
			}
			for(int i=c-1;i>h;i--){
				a[i][h]=gt;
				gt++;
			}
			h++;c--;
				
		}
			cout<< a[x-1][y-1]<<endl;
	}
}
