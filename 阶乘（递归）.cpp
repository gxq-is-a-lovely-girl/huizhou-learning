#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int jiecheng(int n){
	if(n==0){
		return 1;
	}else{
		return n*jiecheng(n-1); 
	}
} 
int main(){
		int n;
		cin>>n;
		cout<<jiecheng(n);
}

