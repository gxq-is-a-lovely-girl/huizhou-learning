#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
bool tmp(int a,int b){
	return a>b;
}
int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int n1=n;
	int a;
	int k[n+1];
	int i=1;
	int sum=0;
	while(n1--){
		cin>>a;
		k[i++]=a;
		sum+=a;
	}
	if(p>=m){
		cout<<0;
		return 0;
	}
	
	if(sum<m){
		cout<<-1;
		return 0;
	}
	sum=0;
	sort(k+1,k+n+1,tmp);
	for(int j=1;j<=p;j++){
		sum+=k[j];
		if(sum>=m){
			cout<<i;
			return 0;
		}
	}
	if(sum<m){
		cout<<-1;
		return 0;
	}
}

