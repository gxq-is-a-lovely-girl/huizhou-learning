#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
   char a[101010]={0};
   cin>>a;
   int k[1000][3]={0};
   for(int i=0;i<strlen(a);i++){
   	k[(int)a[i]][1]++;
   	k[(int)a[i]][2]=i;
   }
   int flag,min1=INT_MAX;
   bool p=false;
   for(int i=0;i<=1000;i++){
   	if(k[i][1]==1){
   		if(k[i][2]<min1){
   			flag=i;
   			min1=k[i][2];
   			p=true;
		   }
	   }
   }
   if(p){
   char c=flag;
   cout<<c;
   }else{
   	cout<<"no";
   }
}
