#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	double sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sum=sum/n;
	for(int i=1;i<=n;i++){
		if(a[i]<=sum){
			cout<<a[i]<<" ";
		}
	}
} 
