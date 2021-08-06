#include<iostream>
using namespace std;
struct p{
	int id=0;
	char name[100]={0};
	char jnum[100]={0};
	char dnum[100]={0};
};
int main(){
	int n;
	cin>>n;
	p a[n+1];
	int  a1,b1;
	int n1=n;
	n1*=3;
	while(n1--){
		cin>>a1>>b1;
		a[a1].id=a1;
		if(b1==2){
			cin>>a[a1].name;
		}
		if(b1==3){
			cin>>a[a1].jnum;
		}
		if(b1==4){
			cin>>a[a1].dnum;
		}
	}
    for(int i=1;i<=n;i++){
    	cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].jnum<<" "<<a[i].dnum<<endl;
	}
}
