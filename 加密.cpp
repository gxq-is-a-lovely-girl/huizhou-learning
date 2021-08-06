#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char a[10001]={0};
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='z'){
			a[i]='a';
		}else if(a[i]==' '){
			a[i]=' ';
		}else{
		a[i]=a[i]+1;	
		}
		
	}
	for(int i=0;i<strlen(a);i++){
		cout<<a[i];
	}
}
