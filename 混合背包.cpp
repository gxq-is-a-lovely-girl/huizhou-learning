#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int dp[1000];
int w[1000],v[1000],num[1000];
int main(){
	int V,n;
	cin>>V>>n;
	for(int i=1;i<=n;i++)cin>>w[i]>>v[i]>>num[i]; 
	for(int i=1;i<=n;i++){
		if(num[i]==0){
			for(int j=w[i];j<=V;j++){
					dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
			}
		}else{
			for(int j=V;j>=w[i];j--){
				for(int k=0;k<=num[i];k++){
					if(j>=k*w[i]){
						dp[j]=max(dp[j],dp[j-k*w[i]]+v[i]*k);	
					}
				}
			}
		}
	}
	cout<<dp[V]; 
}

