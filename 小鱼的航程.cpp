#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n<=5){
	n=5-n+1;
	m-=n;
	m/=5;
	cout<<(5*m+n)*250;
}
    if(n>5){
    	m-=8-n;
    	m/5;
       cout<<5*m*250;
	}
} 
