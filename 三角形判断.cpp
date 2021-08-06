#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b<c||a+c<b||b+c<a){
		cout<<"error";
	}else{
		if(a==b||a==c||b==c){
			if(a==b&&b==c&&c==a){
				cout<<"aaa";
			}else{	
			cout<<"aab";
			}
		}
		else{
			cout<<"abc";
		}
	}
} 
