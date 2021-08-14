#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int n,m;
int  map[10][10]={0};
bool visit[10][10]={0};
int  sx,sy,ex,ey;
int dx[5]={0,1,0,-1,0};
int dy[5]={0,0,1,0,-1};
int ans=0;
bool check(int x,int y){
	if(visit[x][y]==false&&map[x][y]==0&&x<n&&y<m&&x>=0&&y>=0){
		return true;
	}else{
		return false;
	}
}
void tmp(int x,int y){
	if(x==ex&&y==ey){
		ans++;
		return;
	}else{
	    for(int i=1;i<=4;i++){
	    	if(check(x+dx[i],y+dy[i])){
	    	   visit[x][y]=true;
	    	   tmp(x+dx[i],y+dy[i]);
	    	   visit[x][y]=false;
			}
		}
	}
}
int main(){
	int k,l;
	cin>>n>>m;
	int t;
	cin>>sx>>sy>>ex>>ey;
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			visit[i][j]=false;
		}
	}
	for(int i=1;i<=t;i++){
		cin>>k>>l;
		map[k][l]=1;
}
	tmp(sx,sy); 
		cout<<ans;
}

