//#include<bits/stdc++.h>
//using namespace std;
//int r, c, ans = 0;
//string a[10001];
//void check(int i, int j) {
//    a[i][j] = '.';
//    if (i < r && a[i + 1][j] == '#') check(i + 1, j);
//    if (j < c && a[i][j + 1] == '#') check(i, j + 1);
//    if (i > 0 && a[i - 1][j] == '#') check(i - 1, j);
//    if (j > 0 && a[i][j - 1] == '#') check(i, j - 1);
//}
//int main(){
//	 scanf("%d%d",&r,&c);
//	 for(int i=0;i<r;i++) getline(cin, a[i]);
//	 for(int i=0;i<r;i++){
//	 	for(int j=0;j<c;j++){
//	 		if(a[i][j]=='#'){
//	 			check(i,j);
//	 			++ans;
//			 }
//		 }
//	 }
//	 cout<<ans;
//}
#include <bits/stdc++.h>
 
 
using namespace std;
 
int r, c, ans = 0;
string a[100001];
 
void check(int i, int j) {
    a[i][j] = '.';
    if (i < r && a[i + 1][j] == '#') check(i + 1, j);
    if (j < c && a[i][j + 1] == '#') check(i, j + 1);
    if (i > 0 && a[i - 1][j] == '#') check(i - 1, j);
    if (j > 0 && a[i][j - 1] == '#') check(i, j - 1);
}
 
int main() {
    scanf("%d%d\n", &r, &c);
    for(int i=0;i<r;i++) getline(cin, a[i]);
 	for(int i=0;i<r;i++){
	 	for(int j=0;j<c;j++){
            if (a[i][j] == '#') {
                check(i, j);
                ++ans;
            }
        }
    }
 
    printf("%d", ans);
    return 0;
}
