#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;
int n,m;
int BFS[1010][1010];
bool visit[1010][1010];
struct p{
	int x,y;
};
int dx[5]={0,1,0,-1,0}; 
//           ¡ý¡ú ¡ü¡û 
int dy[5]={0,0,1,0,-1};
queue<p>bfs;
bool check(int x,int y,int k,int l){
	if(BFS[k][l]==1&&BFS[x][y]==0&&x<=n&&y<=n&&x>=1&&y>=1&&visit[x][y]==false){
		return true;
	}else if(BFS[k][l]==0&&BFS[x][y]==1&&x<=n&&y<=n&&x>=1&&y>=1&&visit[x][y]==false){
		return true;
	}else{
		return false;
	}
}
int main(){
	cin>>n>>m;
	memset(BFS,-1,sizeof(BFS));
	memset(visit,0,sizeof(visit));
	char c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c;
		BFS[i][j]=c-'0';
		}
	}
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		p k;
		k.x=a;
		k.y=b;
		bfs.push(k);
		int ans=0;
		visit[k.x][k.y]=true;
		while(!bfs.empty()){
			p now=bfs.front();
			bfs.pop();
			for(int j=1;j<=4;j++){
				p next;
				next.x=now.x+dx[j];
				next.y=now.y+dy[j];
				if(check(next.x,next.y,now.x,now.y)){
					visit[next.x][next.y]=true;
			        bfs.push(next);
				}else{
					continue;
				}
			}
			ans++;
		}
		cout<<ans<<endl;
		memset(visit,0,sizeof(visit));
	}
	return 0;
}

