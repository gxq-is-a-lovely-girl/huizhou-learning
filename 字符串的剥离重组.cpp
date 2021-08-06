#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	char a[101]={0};
	char ji[51]={0};
	char ou[51]={0};
	gets(a);
	int k=0;
	int y=0;
	for(int i=0;i<strlen(a);i++){
		if(i%2==0){
			ou[k++]=a[i];
		}
		if(i%2==1){
			ji[y++]=a[i];
		} 
	}
		if(strcmp(ji,ou)>0){
			strcat(ji,ou);
			cout<<ji;
		}
		else if(strcmp(ji,ou)<0){
			strcat(ou,ji);
			cout<<ou;
		}else{
		  cout<<ji<<ji;
		}
}

