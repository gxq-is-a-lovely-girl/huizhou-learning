#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
struct p{
	int s,e;
}a[1000000];
bool tmp(p a,p b){
	return a.e<b.e;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].e;
	}
	sort(a+1,a+1+n,tmp);
	int j=1;
	int end=a[1].e;
	int sum=1;
	while(j<=n){
		j++;
		if(a[j].s>=end){
			sum++;
			end=a[j].s;
		}
	}
	cout<<sum;
}

