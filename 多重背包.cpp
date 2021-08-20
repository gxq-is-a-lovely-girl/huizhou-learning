#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int dp[1010][1010]={0};
	int w[1010],v[1010],num[1010];
int main(){
	int n,V;
	cin>>V>>n;
	
	for(int i=1;i<=n;i++)cin>>w[i]>>v[i]>>num[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<=V;j++){
			for(int k=0;k<=num[i];k++){
				if(j>=k*w[i]){
					dp[i][j]=max(dp[i][j],dp[i-1][j-k*w[i]]+k*v[i]);
				}else{
					break;
				}
			}
		}
	}
	cout<<dp[n][V];
}

