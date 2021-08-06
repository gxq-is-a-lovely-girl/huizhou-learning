#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<stack>
#include<cstring>
using namespace std;
int main(){
	stack<int>my;
	char a[10]={0};
	int n;
	cin>>n;
	int l;
	while(n--){
		memset(a,0,sizeof(a));
		cin>>a;
		if(strcmp(a,"push")==0){
			cin>>l;
			my.push(l);
		}
		if(strcmp(a,"empty")==0){
			if(my.size()==0){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
		}
		if(strcmp(a,"size")==0){
			cout<<"size = "<<my.size()<<endl;
		}
		if(strcmp(a,"pop")==0){
			if(my.size()==0){
				cout<<"pop fail"<<endl;
			}else{
				cout<<"pop "<<my.top()<<endl;
				my.pop();
			}
			
		}
		if(strcmp(a,"top")==0){
			if(my.size()==0){
				cout<<"top fail"<<endl;
			}else{
				cout<<"top = "<<my.top()<<endl;
			}
		}
	}
}

