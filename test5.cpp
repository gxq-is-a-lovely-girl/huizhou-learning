#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a;
	int k[n+20]={0};
	for(int i=1;i<=n;i++){
		cin>>a;
		k[a]=i;
	}
	for(int i=1;i<=n;i++){
		cout<<k[i]<<" ";
	}
}

