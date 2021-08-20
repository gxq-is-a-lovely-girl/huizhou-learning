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
int map[10000][10000];
int	dian[10000];
bool visit[10000]={0};
bool f[10000];
int main(){
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++){
		dian[i]=INF;
		for(int j=1;j<=n;j++){
			map[i][j]=INF;
		}
	} 
	for(int i=1;i<=n;i++){
		cin>>f[i];
	}
	for(int i=1;i<=m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		map[b][a]=map[a][b]=min(map[a][b],c);
	}
	dian[s]=0;
	for(int i=1;i<=n-1;i++){
	     int min1=INT_MAX;
	     int k=-1;
	     for(int j=1;j<=n;j++){
	     	if(dian[j]<min1&&visit[j]==0){
	     		min1=dian[j];
	     		k=j;
			 }
		 }
		 if(k==-1){
		 	break;
		 }
		 for(int j=1;j<=n;j++){
		 	if(map[k][j]==INF)continue;
		 	dian[j]=min(dian[j],dian[k]+map[k][j]); 
		 }
				 visit[k]=1;
	}
	int min1=INT_MAX,flag=-1;
	for(int i=1;i<=n;i++){
		if(min1>dian[i]&&f[i]==0){
			flag = i;
		}
	}
	if(flag==-1){
		cout<<0;
	}else{
		cout<<flag;
	}
return 0;
}

