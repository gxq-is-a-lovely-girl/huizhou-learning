#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#define gxq long long
using namespace std;
gxq shang[1150][1150];
gxq xia[1150][1150];
gxq a[1150][1150]; 
long long  n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=m+1;j++){
			shang[i][j]=-1e18;
			xia[i][j]-1e18;
		}
	}
	xia[1][1]=a[1][1];
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			shang[i][j]=xia[i][j]=max(xia[i][j],xia[i][j-1]+a[i][j]);
		}
		for(int i=2;i<=n;i++){
			xia[i][j]=max(xia[i][j],a[i][j]+xia[i-1][j]);
		}
		for(int i=n-1;i>=1;i--){
			shang[i][j]=max(shang[i][j],shang[i+1][j]+a[i][j]);
		}
		for(int i=1;i<=n;i++){
		     xia[i][j]=max(shang[i][j],xia[i][j]);
		}
	}
	cout<<xia[n][m];
}

