#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i+1]<a[i]){
			swap(a[i+1],a[i]);
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}
} 
