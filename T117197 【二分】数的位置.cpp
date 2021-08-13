#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	int k;
	for(int i=1;i<=m;i++){
		cin>>k;
		int l=1,r=n;
		bool flag=false;
		int ans;
		while(l<=r){
			int mid=(l+r)/2;
			if(a[mid]==k){
				flag=true;
				cout<<mid<<endl;
				break;
			}
			if(a[mid]>=k){
				r=mid-1;
			}else if(a[mid]<k){
				l=mid+1;
			}
		}
		if(!flag)cout<<-1<<endl;
	}
}
