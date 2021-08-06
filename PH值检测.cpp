#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a<7){
		cout<<"Acidic";
	}else if(a>7){
		cout<<"alkalinity";
	}else{
		cout<<"neutral";
	}
}
