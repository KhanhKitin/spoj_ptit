#include<iostream>
using namespace std;
int main(){
	long long a,b,c,d,p,m,g;
	cin>>a>>b>>c>>d>>p>>m>>g;
	long long p1,m1,g1;
	p1=p,m1=m,g1=g;
	
	while(p1-(c+d)>0){
		p1=p1-c-d;
	}
	while(p-(a+b)>0){
		p=p-a-b;
	}
	if(p1<=(c+d)&&p<=(a+b)){
		if(p<=a&&p1<=c) cout<<"both"<<"\n";
		else if(p>a&&p1>c) cout<<"none"<<"\n";
		else cout<<"one"<<"\n";
	}
		
	
			while(m1-(c+d)>0){
				m1=m1-c-d;
			}
			while(m-(a+b)>0){
				m=m-a-b;
			}
			if(m<=(a+b)&&m1<=(c+d)){
				if(m<=a&&m1<=c) cout<<"both"<<"\n";
				else if(m>a&&m1>c) cout<<"none"<<"\n";
				else cout<<"one"<<"\n";\
			}
			
			
					while(g1-(c+d)>0){
						g1=g1-c-d;
					}
					while(g-(a+b)>0){
						g=g-a-b;
					}
					if(g1<=(c+d)&&g<=(c+d)){
						if(g<=a&&g1<=c) cout<<"both";
						else if(g>a&&g1>c) cout<<"none";
						else cout<<"one";
					}
}
