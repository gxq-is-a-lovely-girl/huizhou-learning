#include<iostream>
#include<climits> 
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[101];
	int x;
	int max1=INT_MIN;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(max1<=a[i]){
			max1=a[i];
			x=i;
		}
	}
	if(x==1||x==n){
		cout<<"NO";
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(i<x){
			if(a[i-1]>=a[i]){
				cout<<"NO";
				return 0;
			}
			if(a[i]>=a[x]){
				cout<<"NO";
				return 0;
			}
		}
		if(i>x){
			if(a[i+1]>=a[i]){
				cout<<"NO";
				return 0;
			}
			if(a[i]>=a[x]){
				cout<<"NO";
				return 0;
			}
		} 
	}
	cout<<"YES";
}
