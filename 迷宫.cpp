#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int n,m;
int  map[10][10]={0};
bool visit[10][10];
int  sx,sy,ex,ey;
int dx[5]={0,1,0,-1,0};
int dy[5]={0,0,1,0,-1};
int ans=0;
bool check(int x,int y){
	if(visit[x][y]==true||map[x][y]==0||x>n||y>m||x<1||y<1){
		return false;
	}else{
		return true;
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
	int t;
	cin>>n>>m>>t;
	cin>>sx>>sy>>ex>>ey;
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			visit[i][j]=false;
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			map[i][j]=1;
		}
	}
	for(int i=1;i<=t;i++){
		cin>>k>>l;
		map[k][l]=0;
}
	tmp(sx,sy); 
		cout<<ans;
}

