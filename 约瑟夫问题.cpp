#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
    queue<int>my;
    int k=0;
	for(int i=1;i<=n;i++)my.push(i);
    while(!my.empty()){
    		k++;
    	if(k%m!=0){
    		int u=my.front();
    		my.pop();
    		my.push(u);
		}else{
			cout<<my.front()<<" ";
			my.pop();
			k=0;
		}

	}
}
