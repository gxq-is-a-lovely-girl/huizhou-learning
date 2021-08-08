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
	int t[n+1]={0};
	for(int i=1;i<=n;i++){
		cin>>t[i];
		a[t[i]]++;
	}
	long long sum=0;
	for(int i=1;i<=m;i++){
	   for(int j=1;j<=m;j++){
	   	int sheng =m-t[i]-t[j];
	   	if(sheng>=0){
	   		sum+=a[sheng];
		   } 
	   }
	}
	cout<<sum;
}

