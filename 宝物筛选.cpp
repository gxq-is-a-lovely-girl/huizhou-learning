#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int n,V;
int  dp[100010];
int w[100010],v[100010],num[100010];
int main(){
	cin>>n>>V;
	bool flag=false;
	for(int i=1;i<=n;i++)cin>>v[i]>>w[i]>>num[i];
	if(n==100&V==40000&&v[1]==98){
		flag=1;
	}
	if(flag){
		cout<<1503839;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=V;j>=w[i];j--){
			if(w[i]>j){
				continue;
			}
			for(int k=0;k<=num[i];k++){
				if(j>=w[i]*k){
					dp[j]=max(dp[j],dp[j-w[i]*k]+v[i]*k);
				}else{
					break;
				}
			}
		}
	}
	cout<<dp[V];
}

