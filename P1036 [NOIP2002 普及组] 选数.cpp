#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int a[30]; 
int k,n;
int ans=0;
bool is_prime(int o){
    for(int i=2;i<=o-1;i++){
		if(o%i==0){
		return false;
		}
	}
	return true;
}
void DFS(int x,int sum,int s){
	if(x==k){
		if(is_prime(sum)){
			ans++;
		}
		return;
	}else{
		for(int i=s;i<=n;i++){
			DFS(x+1,sum+a[i],i+1);
		}
	}	
}
int main(){

		cin>>n>>k;
		for(int i=1;i<=n;i++)cin>>a[i];
		DFS(0,0,1);
		cout<<ans;
}

