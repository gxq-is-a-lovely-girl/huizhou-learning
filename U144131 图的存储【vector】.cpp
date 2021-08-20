#include<vector> 
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
	vector<int>gxq[100000000];
int main(){
	int n,m;
	int a,b;
	cin>>n>>m;

	for(int i=0;i<m;i++){
		cin>>a>>b;
		gxq[a].push_back(b);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<"->";
		int size=gxq[i].size();
		for(int j=0;j<size;j++){
			cout<<gxq[i][j]<<" ";
		}
		cout<<endl;
	}
}

