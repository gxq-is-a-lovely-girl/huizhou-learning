#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char a[51]={0};
	char b[51]={0};
	cin>>a;
	cin>>b; 
	if(strcmp(a,b)>0){
		cout<<b<<" "<<a;
	}else if(strcmp(a,b)<0){
		cout<<a<<" "<<b;
	}else{
		cout<<a;
	}
}
