#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[m+2]={0};
	int t;
	for(int i=1;i<=n;i++){
		cin>>t;
		if(t>=m){
			continue;
		}
		a[t]++;
	}
	long long sum=0;
	for(int i=1;i<=m;i++){
	   for(int j=1;j<=m;j++){
	   	for(int z=1;z<=m;z++){
	   		for(int k=1;k<=m;k++){
	   			if(i+z+j+k==m){
	   			sum+=a[i]*a[z]*a[j]*a[k];
			   	}
			   }
		   }
	   }
	}
	cout<<sum;
}

