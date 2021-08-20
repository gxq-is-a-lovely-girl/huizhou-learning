#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n,V;
	cin>>n>>V;
	int dp[n+1][V+1];
	int w[n+1],v[n+1];
	for(int i=1;i<=n;i++)cin>>w[i]>>v[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<=V;j++){
			if(j>=w[i]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	} 
	cout<<dp[n][V];
}

