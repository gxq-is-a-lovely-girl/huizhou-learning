#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int n;
int vis[10];
int a[10];
void DFS(int x){
	if(x==n){
		for(int i=0;i<n;i++){
			 printf("%5d",a[i]);
		}
		cout<<endl;
		return;
	}else{
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				vis[i]=1;
				a[x]=i;
				DFS(x+1);
				vis[i]=0;
			}
		}
	}
}
int main(){
	cin>>n;
	DFS(0);
}

