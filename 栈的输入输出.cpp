#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<stack>
using namespace std;
int main(){
	stack<int>my;
	int n;
	cin>>n;
	int a;
	for(int i=1;i<=n;i++){
	cin>>a;
	my.push(a);
}
	for(int i=1;i<=n;i++){
		cout<<my.top();
		my.pop();
	}
}

