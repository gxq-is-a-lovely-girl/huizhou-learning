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
	int a[n+1][m+1]={0};
	int b[n+1][m+1]={0};
	int c[n+1][m+1]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
		for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
		}
	}
		for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
		for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
		cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}

