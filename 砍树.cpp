#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int n,m;
int a[100000000];
bool  check(int x){
	long long  sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=x)sum+=a[i]-x;
		if(sum>=m)return true;
	}
	 return false;
}
int main(){
		
		cin>>n>>m;

		long long ans;
		for(int i=1;i<=n;i++)cin>>a[i];
		int l=0,r=1e9;
		while(l<=r){
			int mid=(l+r)/2;
			if(check(mid))ans=mid,l=mid+1;
			else r=mid-1;
		}
		cout<<ans;
}

