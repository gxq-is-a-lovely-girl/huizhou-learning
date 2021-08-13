#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	int a[m+10];
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	int b[n+10];
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	long long ans=0;
	sort(a+1,a+1+m);
	int y;
	for(int i=1;i<=n;i++){
		int l=1,r=m,y=0;
		while(l<=r){
			int mid=(l+r)/2;
			if(b[i]>=a[mid]){
				y=mid;
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
			if(y==0){
				ans+=a[1]-b[i];
			}else{
			ans+=min(abs(a[y+1]-b[i]),abs(a[y]-b[i]));
			}
	}
	cout<<ans;
}

