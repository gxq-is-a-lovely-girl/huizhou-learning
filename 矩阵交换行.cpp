#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int a[6][6];
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>a[i][j];
		}
	}
	int x,y;
	cin>>x>>y;
	for(int i=1;i<=5;i++){
		swap(a[x][i],a[y][i]);
	}
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

}

