#include<stdio.h>
int main(){
	double s=0;
	double a[100001];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
		s+=a[i];
	}
//	printf("%lf\n",s);
	printf("%.12lf",s/n);
}
