#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<vector>
using namespace std;
vector<int>G[100010];
int n,m,K,o;
bool visit[100010]={0};
int dis[100010][100010]={0};
void DFS(int n,int sum){
	if(n==o){
		cout<<o<<" ";
	    cout<<sum<<endl;
		return;
	}
	for(int i=0;i<G[n].size();i++){
		int  y=G[n][i];
		if(visit[y]==1){
			continue;
		}
		visit[y]=1;
		DFS(y,sum+dis[n][y]);
		visit[y]=0;
	}
	return;
}
int main(){
	cin>>n>>m>>K;
	int k,l;
	for(int i=1;i<=m;i++){
		cin>>k>>l;
		G[k].push_back(l);
		cin>>dis[k][l];
	}
	for(int i=1;i<=K;i++){
		cin>>o;
		DFS(o,0);
	}
}
