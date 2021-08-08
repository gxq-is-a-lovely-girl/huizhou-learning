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
	int flag=0;
	int ans=0;
	char a[20]={0};
	while(n--){
		memset(a,0,sizeof(a));
		cin>>a;
		if(strcmp(a,"char")==0){
		while(ans%1!=0)ans++;
		ans+=1;
		flag=max(flag,1);
		}
		if(strcmp(a,"int")==0){
			while(ans%4!=0)ans++;
		ans+=4;
		flag=max(flag,4);
		}
		if(strcmp(a,"short")==0){
		while(ans%2!=0)ans++;
		ans+=2;
		flag=max(flag,2);
		}
		if(strcmp(a,"double")==0){
			while(ans%8!=0)ans++;
		ans+=8;
		flag=max(flag,8);
		}
	}
	while(ans%flag!=0)ans++;
	cout<<ans;
}

