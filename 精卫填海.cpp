#include<bitsdc++.h>
using namespace std;

int V,n,c,cc;
int v[10005],e[10005];
int dp[10005];

int main(){
	cin>>V>>n>>c;
	cc=c;
	for(int i = 1;i<=n;i++){
		scanf("%d%d",&v[i],&e[i]);
	}
	for(int i = 1;i<=n;i++){
		for(int j = c;j>=e[i];j--){
			if(dp[j-e[i]]+v[i]>dp[j]){
				dp[j]=dp[j-e[i]]+v[i];
			}
			else{
				dp[j]=dp[j];
			}
		}
	}
	if(dp[c]>=V){
		cout<<c-(lower_bound(dp,dp+c,V)-dp);
	}
	else{
		cout<<"Impossible";
	}
	return 0;
}

