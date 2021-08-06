#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char a[300]={0};
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='A'){
			cout<<'T';
		}else if(a[i]=='T'){
			cout<<"A";
		}else if(a[i]=='G'){
			cout<<'C';
		}
		else if(a[i]=='C'){
			cout<<'G';
		}
	} 
}
