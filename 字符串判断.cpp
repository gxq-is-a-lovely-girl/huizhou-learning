#include<iostream>
#include<cstring>
#include<cstdio> 
using namespace std;
#define n 501
int pd(char a[],char b[]){
	int lena,lenb;
	lena=strlen(a);
	lenb=strlen(b);
	if(lena<lenb){
		return 0; 
	}
	int i=0,j=0;
	while(i<lena&&j<lenb){
		if(a[i]==b[j]){
			i++;
			j++;
		}else{
			i=i-j+1;
			j=0;
		}
	}
	if(j==lenb){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	char a[n]={0},b[n]={0};
	gets(a);
	gets(b);
	if(pd(a,b)){
		cout<<b<<"is substring of"<<a;
		return 0;
	}
	else if(pd(b,a)){
		cout<<a<<"is substring of "<<b;
		return 0;
	}
		cout<<"No substring";
	
	
}
