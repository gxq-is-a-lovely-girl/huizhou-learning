#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
long long n,V;
long long v[10000010]={0},w[100000010]={0};//v[i]Ϊ��ֵ��w[i]Ϊ���ۣ� ������ 
long long dp[100000010]={0};
int main(){
	cin>>V>>n;//VΪ����
	for(int i=1;i<=n;i++)cin>>w[i]>>v[i]; 
	for(int i=1;i<=n;i++){
		for(int j=w[i];j<=V;j++){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	cout<<dp[V];
}

