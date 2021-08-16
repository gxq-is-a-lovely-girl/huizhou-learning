#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int dp[1000][1000];
int main(){
	int n,m;
	cin>>n>>m;
	dp[0][1]=1; 
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int l,r;
			if(j==1){
				l==n;
			}else{
				l=j-1;
			}
			if(j==n){
			r=1;	
			}
			else{
			 r=j+1;
			} 
			
			dp[i][j]=dp[i-1][l]+dp[i-1][r];
		}
	}
	cout<<dp[m][1];
}

