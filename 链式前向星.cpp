#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
struct node{
	int to;//终点
	int next;//储存以i为起点的所有边中，在加入当前这一条边之前最后一条边的编号 
}a[1000105];//表示边的编号 
int head[100105]; //跟顶点有关，存储以i为起点的所有边中最后一条边的编号 
int n,m,cnt;//cnt为边的编号 
void add(int u,int v){
	cnt++;
	a[cnt].to=v;
	a[cnt].next=head[u];
	head[u]=cnt;
}
int main(){
		cin>>n>>m;
		for(int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			add(u,v);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<"->";
			for(int j=head[i];j;j=a[j].next){
				cout<<a[j].to<<' ';
			}
			cout<<endl;
		}
	return 0; 
}

