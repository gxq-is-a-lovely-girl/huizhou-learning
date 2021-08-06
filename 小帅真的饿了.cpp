#include<iostream>
using namespace std;
struct p{
	int a,b;
}; 
int main(){
	p m[3];
	int x,y;
	cin>>x>>y;
	for(int i=0;i<3;i++){
		cin>>m[i].a>>m[i].b;
	}
	int a1=x;
	int a2=y;
	for(int i=0;i<3;i++){
			if(y>m[i].b){
				while(a2>=m[i].b){
				a2-=m[i].b;
				a1-=m[i].a;
				if(a1<=0){
					cout<<"YES";
					return 0;
				}	
				}
			}
			a1=x;
			a2=y;
	}
	cout<<"NO";
} 
