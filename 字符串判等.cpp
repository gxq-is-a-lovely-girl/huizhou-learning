#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
char a[1001]={0};
char b[1001]={0};
char c[1001]={0};
char d[1001]={0};
	gets(a);
	gets(b);
	int k=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' '){
			continue;
		}		
		c[k++]=a[i];
	}
	k=0;
	for(int i=0;i<strlen(b);i++){
		if(b[i]==' '){
			continue;
		}		
		d[k++]=b[i];
	}
	for(int i=0;i<strlen(c);i++){
		if('A'<=c[i]&&c[i]<='Z'){
			c[i]=c[i]+32;
		}
	}
	for(int i=0;i<strlen(d);i++){
		if('A'<=d[i]&&d[i]<='Z'){
			d[i]=d[i]+32;
		}
	}
	if(strlen(c)!=strlen(d)){
		cout<<"NO";
		return 0; 
	}
	for(int i=0;i<strlen(c);i++){
		if(c[i]!=d[i]){
			cout<<"NO";
		return 0;
		}
	}
	cout<<"YES";
} 
