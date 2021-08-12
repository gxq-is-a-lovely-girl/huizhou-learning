#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+5]={0};
	int k;
	for(int i=1;i<=m;i++){
		cin>>k;
		a[k]++;
	}
	for(int i=1;i<=n;i++){
		if(a[i]>=2){
			cout<<i<<" "<<a[i]<<endl;
		}
	}
}

