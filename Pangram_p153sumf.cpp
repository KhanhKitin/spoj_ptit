//#include<stdio.h>
//#include<string.h>
//int main(){
//	char s[225];
//	int n,dem=0;
//	int a[1000]={0};
//	scanf("%d",&n);
//	scanf("%s",s);
//	for(int i=0;i<n;i++){
//      	if(s[i]>=65&&s[i]<=90)
//       		s[i]=s[i]+32;
//    }
//	for(int i=0;i<n;i++){
//		if(a[s[i]]==0){
//			a[s[i]]=1;
//			dem++;
//		}
//	}
//	if(dem==n) printf("YES");
//	else printf("NO");
//}
#include<stdio.h>
int tim(char s, char ds[],int m){
  for (int i=0;i<m;i++)
    if (s==ds[i]) return i;
  return -1;
}
main(){
  int i,n,m=0;
  char s[100];
  scanf("%d",&n);
  scanf("%s",s);
  char ds[26];
  for (i=0;i<n;i++)
   {
   	 if (s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
     int t = tim (s[i],ds,m);
     if (t==-1) ds[m++] = s[i];
   }
   if (m==26) printf("YES");
   else printf("NO");
}
