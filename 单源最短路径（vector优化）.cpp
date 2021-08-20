#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<string>
#include<cstring>
#include<climits>
#include<vector>
#define INF INT_MAX
using namespace std;
int n,m,s;
struct p{
	int to,dis;
};
vector<p>G[100010];
int dian[10010];
bool visit[10010]={0};
int main(){
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++){
		dian[i]=INF; 
	}
	for(int i=1;i<=m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		p now;
		now.to=b;
		now.dis=c; 
		G[a].push_back(now);
	}
	dian[s]=0;
	for(int i=1;i<n;i++){
		int mn=INT_MAX;
		int k=-1;
		for(int j=1;j<=n;j++){
			if(dian[j]<mn&&visit[j]==0){
				mn=dian[j];
				k=j;
			}
		}
		if(k==-1)break;
		for(int j=0;j<G[k].size();j++){
			dian[G[k][j].to]=min(dian[j],dian[k]+G[k][j].dis); 
		}
		visit[k]=1;
	}
	for(int i=1;i<=n;i++)cout<<dian[i]<<" ";
return 0;
}

