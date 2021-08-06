#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	double n;

	char a[501]={0},b[501]={0};
		cin>>n>>a>>b;
	double sum=0;
	if(strlen(a)!=strlen(b)){
		cout<<"no";
		return 0;
	}
	for(int i=0;i<strlen(a);i++){
		if(a[i]==b[i]){
		   sum++;
		}
	}
	if((sum/strlen(a))>=n){
		cout<<"yes";
	}else{
		cout<<"no";
	} 
} 
