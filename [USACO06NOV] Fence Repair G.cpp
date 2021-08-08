#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<queue> 
using namespace std;
int main(){
	int n;
	cin>>n;
	int a;
	long long sum=0;
     priority_queue<int,vector<int>,greater<int> >p;
     for(int i=1;i<=n;i++){
     	cin>>a;
     	p.push(a);
	 }
	 while(p.size()>=2){
	 	int c=p.top();p.pop();
	 	int d=p.top();p.pop();
	 	sum+=c+d;
	 	p.push(c+d); 
	 }
	 cout<<sum;
}

