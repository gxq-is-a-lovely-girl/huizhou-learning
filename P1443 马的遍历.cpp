#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;
struct p{
	int x,y;
};
int dx[9]={0,-1,-2,-2,-1,1,2, 2, 1}; 
int dy[9]={0, 2, 1,-1,-2,2,1,-1,-2};
int dis[1000][1000]; 
int n,m,a,b;
queue<p>bfs;
bool w[1000][1000];
bool check(int x,int y){
	if(x>0&&y>0&&x<=n&&y<=m&&dis[x][y]==-1&&w[x][y]==false){
		return true;
	}else{
		return false;
	}
}
int main(){
	cin>>n>>m>>a>>b;
	for(int i=1;i<=999;i++){
		for(int j=1;j<=999;j++){
			dis[i][j]=-1;
			w[i][j]=false;
		}
	}
	p ue;
	ue.x=a,ue.y=b;
		dis[a][b]=0;
	bfs.push(ue); 
    while(!bfs.empty()){
    	p a=bfs.front();//现在点 
    	bfs.pop();
    	for(int i=1;i<=8;i++){
    		if(check(a.x+dx[i],a.y+dy[i])){
    			p l;//下一个点 
    			l.x=a.x+dx[i];
    			l.y=a.y+dy[i];
    			bfs.push(l);
    			dis[l.x][l.y]=dis[a.x][a.y]+1;
				w[l.x][l.y]=true;
			}else{
				continue;
			}
		}
	
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%-5d",dis[i][j]);
		}
		cout<<endl;
	}
}

