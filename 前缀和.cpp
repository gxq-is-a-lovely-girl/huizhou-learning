#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	long long n,m,a1,b;
	cin>>n;cin>>m;
	long long a[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long sum=0;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+a[i];
	}
	while(m--){
		sum=0;
		cin>>a1>>b;
		cout<<a[b]-a[a1-1]<<endl;
	}
}

