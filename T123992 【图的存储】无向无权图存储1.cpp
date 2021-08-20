#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	bool G[n+1][n+1]={0};
	int a,b;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		G[a][b]=true;
		G[b][a]=true; 
	} 
	for(int i=1;i<=k;i++){
		cin>>a>>b;
		if(G[a][b]){
			cout<<"Cancel"<<endl;
		}else{
			cout<<"Accepted"<<endl;
		}
	}
}

