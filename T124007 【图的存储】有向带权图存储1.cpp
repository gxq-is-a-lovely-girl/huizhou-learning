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
	int  G[n+1][n+1]={0};
	int a,b,c;
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		if(G[a][b]==0||G[a][b]>c){
		G[a][b]=c; 
		}
	} 
	for(int i=1;i<=k;i++){
		cin>>a>>b>>c;
		if(G[a][b]==0||G[a][b]>c){
			cout<<"Accepted"<<endl;
			G[a][b]=c;
		}else{
			cout<<"Cancel"<<endl;
		}
	}
}

