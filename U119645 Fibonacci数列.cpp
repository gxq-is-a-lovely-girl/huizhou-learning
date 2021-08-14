#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int fun(int n){
	if(n==1||n==2){
		return 1;
	}else{
		return fun(n-1)+fun(n-2);
	}
} 
int main(){
	int a;
	cin>>a;
	cout<<fun(a); 
}

