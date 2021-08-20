#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int  prime[1001]={0};
int n;
int k=1,l;
void prie(){
	for(k=1;k<=n;k++){
		if(k==1){
			prime[k]=0;
			continue;
		}
		for(l=1;l<=k-1;l++){
			if(k%l==0){
			prime[k]+=l;
			}
		}
	}
}
int main(){
	cin>>n;
	prie();
	int dp[10000]={0};
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			dp[j]=max(dp[j],dp[j-i]+prime[i]);
		}
	}
	cout<<dp[n];
}

