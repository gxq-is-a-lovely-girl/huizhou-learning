#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int  tmp(int n,int m){
	if(m==0||n==1){
		return 1;
	}else if(n>=m){
		return tmp(n-m,m)+tmp(n,m-1);
	}else if(n<m){
		return tmp(n,n);
	}
}
int main(){
	int n,m;
	int a;
	cin>>a;
	int i=1;
	int p[30]={0};
	while(a--){
		cin>>n>>m;
		p[i++]=tmp(n,m);
	} 
	for(int j=1;j<i;j++)cout<<p[i]<<endl;
}

