#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
    int x=a*60+b;
    int y=7*60+15;
    if(x<=y){
    	cout<<"on time";
	}else{
		cout<<"late";
	}
}
