//#include<stdio.h>
//#include<math.h>
//int nt(long long n){
//	if(n<2) return 0;
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//int main(){
//	int dem=0;
//	long long n;
//	do{
//		scanf("%d",&n);
//		if(n==0) return 0;
//		int dem=0;
//		for(int i=n+1;i<=2*n;i++){
//			if(nt(i)) dem++;
//		}
//		printf("%d\n",dem);
//		dem=0;
//	}
//	while(n!=0);
//}
//#include<conio.h>
#include<stdio.h>
  
#define M 246912
  
bool Prime[246920];
  
void sang()
{
for(long i=3;i<=M;i+=2) Prime[i]=true;
Prime[0]=Prime[1]=false;
Prime[2]=true;
for(long i=2;i<=M/i;i++)
if(Prime[i])
{
for(long j=i*i;j<=M;j+=i) Prime[j]=false;
}
}
int main()
{
    long A[10000],n,d;
    sang();
    int T=0;
    do
    {
        scanf("%ld",&n);
        if(n==0) break;
        d=0;
        for(int i=n+1;i<=2*n;i++)
        if(Prime[i])d++;
        A[++T]=d;
    }while(1);
    for(int i=1;i<=T;i++)
    printf("%ld\n",A[i]);
}
