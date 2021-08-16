#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int n,r;
int a[100];
void DFS(int x){
	if(x==r){
		for(int i=0;i<r;i++){
			 printf("%3d",a[i]);
		}
		cout<<endl;
		return;
	}else{
		for(int i=a[x-1]+1;i<=n;i++){
				a[x]=i;
				DFS(x+1);
		}
	}
}
int main(){
	cin>>n>>r;
	DFS(0);
}

