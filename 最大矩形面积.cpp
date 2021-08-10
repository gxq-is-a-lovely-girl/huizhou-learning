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
     int a[n+1]={0},ans=0;
     for(int i=1;i<=n;i++)cin>>a[i];
     for(int i=1;i<=n;i++){
     	int tmp=0;
     	for(int j=i;j>=1;j--){
     		if(a[j]>=a[i])tmp+=a[i];
     		else break;
		 }
		 for(int j=i+1;j<=n;j++){
		 	if(a[j]>a[i])tmp+=a[i];
		 	else break;
		 }
		 ans=max(ans,tmp);
	 }
	 cout<<ans;
	 
}

