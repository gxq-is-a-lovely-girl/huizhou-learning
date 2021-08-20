#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<vector>
using namespace std;
vector<int>G[200010];
int n,m,a,b;
bool visit[200010]={0};
bool flag =0;
void DFS(int n){
	if(n==b){
		flag =1;
		return;
	}
	for(int i=0;i<G[n].size();i++){
		int  y=G[n][i];
		if(visit[y]==1){
			continue;
		}
		visit[y]=1;
			DFS(y);
	}
	return;
}
int main(){
	cin>>n>>m>>a>>b;
	int k,l;
	for(int i=1;i<=m;i++){
		cin>>k>>l;
		G[k].push_back(l);
	}
    DFS(a);
    if(flag){
    	cout<<"Yes";
	}else{
		cout<<"No";
	}
}
