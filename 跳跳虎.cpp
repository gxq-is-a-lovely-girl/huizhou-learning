#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
long long tmp(int n){
	long long sum=0;
	if(n<0)n=-n;
	else if(n==0){
		return 0;
	}
	for(long long i=1;i<100000;i++){
		sum+=i;
		if(sum>=n&&(sum-n)%2==0){
			return i;
		}else{
			continue;
		}
	} 
}
int main(){
	long long n;
	cin>>n;
	long long a;
	for(long long i=1;i<=n;i++){
		cin>>a;
		cout<<tmp(a)<<endl;
	}
}

