#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<stack>
using namespace std;
int main(){
	stack<char>gxq;
	char a[300]={0};
	cin>>a;
	for(int i=1;i<=strlen(a);i++){
		if(a[i]=='('){
			gxq.push(a[i]);
		}else if(a[i]==')'){
		if(gxq.empty()){
			cout<<"NO";
			return 0;
		}
		if(gxq.top()=='(')gxq.pop();
		}
		if(a[i]=='@'){
			break;
		}
	}
	if(gxq.empty()){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}

