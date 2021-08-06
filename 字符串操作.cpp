#include<iostream>
#include<cstring>
using namespace std;
int n,o;
char y[101],x[101];
int main(){
	cin>>y>>n;
	for(int i=0;i<n;i++){
		cin>>o;
		if(o==1){
			cin>>x;
			strcat(y,x);
		}
		else if(o==2){
			cout<<strlen(y)<<endl;
		}
		else if(o==3){
			cin>>x;
			if(strcmp(y,x)>0){
				cout<<y<<endl;
			}else{
				cout<<x<<endl; 
			}
		}
	}
}
