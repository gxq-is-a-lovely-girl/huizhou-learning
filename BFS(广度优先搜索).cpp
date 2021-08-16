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
char a[200][200];
int dx[5]={0,1,0,-1,0}; 
//           ↓→ ↑← 
int dy[5]={0,0,1,0,-1};
int dis[200][200]; 
int n,m;
queue<p>bfs;
bool check(int x,int y){
	if(x>0&&y>0&&x<=n&&y<=m&&dis[x][y]==0&&a[x][y]!='#'){
		return true;
	}else{
		return false;
	}
}
int main(){

	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	p k;
	k.x=1,k.y=1;
	bfs.push(k);
	dis[1][1]=1;
    while(!bfs.empty()){
    	p a=bfs.front();//现在点 
    	bfs.pop();
    	if(a.x==n&&a.y==m){
    		cout<<dis[a.x][a.y];
    		break; 
		}//找到此点直接输出 
    	for(int i=1;i<=4;i++){
    		if(check(a.x+dx[i],a.y+dy[i])){
    			p l;//下一个点 
    			l.x=a.x+dx[i];
    			l.y=a.y+dy[i];
    			bfs.push(l);
    			dis[l.x][l.y]=dis[a.x][a.y]+1;
			}
		}
	}
}

