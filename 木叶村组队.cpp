#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<queue>
using namespace std;
long long z[101010],num[101010];
int main(){
	priority_queue<long long,vector<long long>,greater<long long> >q;
	long long n;
	cin>>n;
	long long mnum=-1;
	long long sum=0;
	for(long long i=1;i<=n;i++){
		cin>>z[i]>>num[i];
		mnum=max(mnum,num[i]);
	}
	long long ans=-1;
	for(long long i=mnum;i>=1;i--){
		for(long long j=1;j<=n;j++){
			if(num[j]==i){
				q.push(z[j]);
				sum+=z[j];
			}
		}
		while(q.size()>i){
			sum-=q.top();
			q.pop();
		}
		ans=max(ans,sum);
	}
	cout<<ans;
}

