#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<string>
#include<cstring>
#include<climits>
#define INF INT_MAX
using namespace std;
int map[100000][100000];
int main(){
	int n,m;
	cin>>n>>m; 

	int visit[m+1];
	for(int i=1;i<=m;i++){
		cin>>visit[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j)map[i][j]=0;
			else map[i][j]=INF;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int a;
			cin>>a;
			map[i][j]=a;
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(map[i][k]!=INF&&map[k][j]!=INF){
					map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
				}
			}
		}
	}
	int ans=0;
	for(int i=2;i<=m;i++){
		ans+=map[visit[i-1]][visit[i]];
	}
	cout<<ans;
return 0;
}

