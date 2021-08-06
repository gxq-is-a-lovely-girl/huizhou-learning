#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cin>>x>>y>>z;
	int z1=z;
	z1-=x;
	z-=y;
	if(z1%5==0&&z%7==0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
} 
