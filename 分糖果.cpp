#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int a[6];
	int ans=0;
	for(int i=1;i<=5;i++)cin>>a[i];
	for(int i=1;i<=5;i++){
		int t=a[i]/3;
		if(i==1){
			a[5]+=t;
		}else{
			a[i-1]+=t;
		}
		if(i==5){
			a[1]+=t;
		}else{
			a[i+1]+=t;
		}
		ans+=a[i]%3;
		a[i]=t;
	}
	for(int i=1;i<=5;i++)cout<<a[i]<<" ";
	cout<<endl;
	cout<<ans;
}

