#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(2*a<b&&b<4*a&&b%2==0){
	cout<<"Yes";
}else{
	cout<<"No";
}
}
