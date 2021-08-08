#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<stack>
using namespace std;
int main(){
	char a[10000]={0};
	cin>>a; 
	stack<int>my;
	int x,y;
	int k=0; 
	for(int i=0;i<strlen(a);i++){
		char c=a[i];
		if('0'<=c&&c<='9'){
			k=k*10+c-'0';
		}
		if(c=='+'){
			x=my.top();
			my.pop();
			y=my.top();
			my.pop();
			my.push(x+y);
		}
		if(c=='-'){
			x=my.top();
			my.pop();
			y=my.top();
			my.pop();
			my.push(y-x);
		}
		if(c=='*'){
			x=my.top();
			my.pop();
			y=my.top();
			my.pop();
			my.push(x*y);
		}
		if(c=='/'){
			x=my.top();
			my.pop();
			y=my.top();
			my.pop();
			my.push(y/x);
		}
		if(c=='@'){
			break;
		}
		 if(c=='.'){
		 	my.push(k);
		 	k=0;
		 }
	}
	cout<<my.top();
}

