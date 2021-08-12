#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
bool tmp(long long k){
	long long p[30]={0};
	long long l=0;
	while(k!=0){
		p[++l]=k%10;
		k/=10;
	}
	bool u=false;
	for(int j=2;j<l;j++){
		if(p[j-1]<p[j]&&p[j+1]<p[j]){
			u=true;
		}else if(p[j-1]>p[j]&&p[j+1]>p[j]){
			u=true;
		}else{
			u=false;
			break;
		}
	}
	return u;
}
int main(){
		long long n,m;
		cin>>n>>m;
		int sum=0;
		for(long long i=n;i<=m;i++){
			if(tmp(i)||i<100){
				cout<<i<<endl;
				sum++;
			}
		}
		if(sum==0){
			cout<<-1;
		}
}

