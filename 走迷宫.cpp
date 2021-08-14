#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int dx[5]={0,1,0,-1,0};
int dy[5]={0,0,1,0,-1};
bool visit[50][50];
char a[50][50];
	int n,m;
bool check(int  x,int y){
	if(visit[x][y]==true||a[x][y]=='#'||x>n||y>m||x<1||y<1){
		return false;
	}else{
		return true;
	}
}
void DFS(int x,int y){
	visit[x][y]=true;
	for(int i=1;i<=4;i++){
		if(check(x+dx[i],y+dy[i])){
			DFS(x+dx[i],y+dy[i]);
		}
	}
}
int main(){
	cin>>n>>m;
	int sp,sq,a1,b1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='S')sp=i,sq=j;
			if(a[i][j]=='T')a1=i,b1=j;
		}
	}
	for(int i=0;i<50;i++){
		for(int j=0;j<50;j++){
			visit[i][j]=false;
		}
	}
	DFS(sp,sq);
	if(visit[a1][b1]==true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}

