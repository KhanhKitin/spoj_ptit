//#include<stdio.h>
//void sapxep(int a[],int left,int right){
//	int l=left,r=right,t=a[(left+right)/2];
//	while(l<=r){
//		while(a[l]<t&&l<right) l++;
//		while(a[r]>t&&r>left) r--;
//		if(l<=r){
//			int t=a[l];
//			a[l]=a[r];
//			a[r]=t;
//			l++;r--;
//		//	swap(a[l++],a[r--]);
//		}
//		if(l<right) sapxep(a,l,right);
//		if(left<r) sapxep(a,left,r);
//	}
//}
////long long tong(long a[],long n){
////	int s=0;
////	for(int i=1;i<=n;i++){
////		s+=a[i];
////	}
////	return s;
////}
//int main(){
//	int a[100000];
//	int n,dem=1;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	sapxep(a,0,n-1);
////	for(int i=1;i<=n;i++){
////		printf("%d ",a[i]);
////	}
////	printf("%d ",tong(a,n));
//	int s=a[0];
//	for(int i=1;i<n;i++){
//		if(a[i]>=s){
//			dem++;
//			s+=a[i];
//		}
//	}
//	printf("%d",dem);
//}
#include<stdio.h>

void qs(int a[],int left,int right){
	 int i = left , j = right , x= a[(left + right) / 2];
	 do{
	 	while(a[i]<x) i++;
	 	while(a[j]>x) j--;
	 	if(i<=j){
	 		int t = a[i] ; a[i] = a[j] ; a[j] = t;
	 		i++;	j--;
		}
	 }while(i<=j);
	 if(i<right) qs(a,i,right);
	 if(j>left) qs(a,left,j);
}

main(){
	int n,a[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)	scanf("%d",&a[i]);
	qs(a,0,n-1);

	int dem=1,s=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>=s){
			dem++;
			s+=a[i];
		}
	}
	printf("%d",dem);
}
