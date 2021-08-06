#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char x[51]={0};
	char y[51]={0};
	char b[102]={0};
	cin>>x;
	cin>>y;
	if(strcmp(x,y)>0){
		int lx=strlen(x);
		int ly=strlen(y);
		int k=0;
		for(int i=0;i<lx+ly;i++){
			if(i<=strlen(x)-1){
				b[i]=x[i];
			}else{
				b[i]=y[k++];
			}
		}
	}
	if(strcmp(x,y)<0){
		int lx=strlen(x);
		int ly=strlen(y);
		int k=0;
		for(int i=0;i<lx+ly;i++){
			if(i<=strlen(y)-1){
				b[i]=y[i];
			}else{
				b[i]=x[k++];
			}
		}
	}
	for(int i=0;i<strlen(b);i++){
		if(i%2==1){
			cout<<b[i];
		}
	}
}
