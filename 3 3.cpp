#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
struct p{
	char name[20];
	int   num;
	double c1;
	double c2;
	double pj;
};
int main(){
	int n;
	cin>>n;
	p a[n+1];
	int k;
	cin>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i].name>>a[i].num>>a[i].c1>>a[i].c2;
		a[i].pj=(a[i].c1+a[i].c2)/2;
	}
	char m[20]={0};
	char c[20]={0};
	while(k--){
		memset(m,0,sizeof(m));
		memset(c,0,sizeof(c));
		cin>>m;
		if(strlen(m)==4){
					cin>>c;
			for(int i=1;i<=n;i++){
					if(strcmp(a[i].name,c)==0){
						cout<<a[i].c1<<" "<<a[i].c2<<endl;
					}
			}
		}
		if(strlen(m)==6){
			int o;
			cin>>o;
				for(int i=1;i<=n;i++){
					if(a[i].num==o){
					printf("%.2lf\n",a[i].pj);
					}
	}
}
}
}
