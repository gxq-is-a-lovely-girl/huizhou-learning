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
int n,m;
queue<p>gxq;
int ans=0;
char a1[200][200]={0};
bool visit[200][200];
int dx[5]={0,0,0,-1,1};
int dy[5]={0,1,-1,0,0};
int a[200][200]={0};
bool  check(int x,int y){
	if(a[x][y]!=0&&visit[x][y]==false&&x<=n&&x>=1&&y<=m&&y>=1){
		return true;
	}else{
		return false;
	}
}
void bfs(int x,int y){
	p k;
	visit[x][y]=true;
	k.x=x;
	k.y=y;
	gxq.push(k);
	while(!gxq.empty()){
		p now=gxq.front();
        gxq.pop();
        for(int i=1;i<=4;i++){
        	p l;
			l.x=now.x+dx[i];
			l.y=now.y+dy[i]; 
        	if(!check(l.x,l.y)){
        	continue;
			}
				visit[l.x][l.y]=true;
        		gxq.push(l);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a1[i][j];
			a[i][j]=a1[i][j]-'0';
		}
	}
   for(int i=1;i<=n;i++){
   	for(int j=1;j<=m;j++){
   		if(a[i][j]!=0&&visit[i][j]==false){
   			bfs(i,j);
   				ans++;
		   }
   }
}
		cout<<ans<<endl;
}
