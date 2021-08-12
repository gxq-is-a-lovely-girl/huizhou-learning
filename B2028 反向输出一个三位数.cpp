#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	char a[3]={0};
	cin>>a;
	for(int i=strlen(a)-1;i>=0;i--){
		cout<<a[i];
	}
}
