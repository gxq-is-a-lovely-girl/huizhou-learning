#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[10050]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	long long b[100000]={0};
	for(int i=1;i<=n;i++){
		if(a[i]>=0){
			b[a[i]]++;
		}
	}
	long long max1=0;
	for(long long i=0;i<=a[n];i++){
	if(b[max1]<=b[i]){
		max1=i;
	}
	}
	cout<<max1;
}

