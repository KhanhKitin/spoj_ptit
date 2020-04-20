#include<stdio.h>
int main(){
	int a,b,c;
	int dem=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b+c) printf("%d=%d+%d",a,b,c);
	else 
		if(a==b-c) printf("%d=%d-%d",a,b,c);
			else 
				if(a==b*c) printf("%d=%d*%d",a,b,c);
				else 
					if((a==b/c)&&(c!=0)) printf("%d=%d/%d",a,b,c);
					else 
						if(a+b==c) printf("%d+%d=%d",a,b,c);
						else 
							if(a-b==c) printf("%d-%d=%d",a,b,c);
							else 
								if(a*b==c) printf("%d*%d=%d",a,b,c);
								else 
									if((a/b==c)&&(b!=0)) printf("%d/%d=%d",a,b,c);
	return 0;
}
