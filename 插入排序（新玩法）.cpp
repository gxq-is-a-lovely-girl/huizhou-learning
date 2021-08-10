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
	int a[n+3];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>a[n+1];
	sort(a+1,a+n+2);
	for(int i=1;i<=n+1;i++){
	cout<<a[i]<<" ";
	}
}

