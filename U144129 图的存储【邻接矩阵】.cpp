#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	bool G[n+1][n+1]={0};
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		G[a][b]=true;
	} 
	for(int i=1;i<=n;i++){
		cout<<i<<"->";
		for(int j=1;j<=n;j++){
			if(G[i][j]){
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
}

