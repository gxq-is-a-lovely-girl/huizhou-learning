#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
long long a[101010];
char b[101010];
long long k=1;
int main(){
	cin>>a[k];
	a[k]=a[k]%10000;
	while(cin>>b[k]){
		
		cin>>a[++k];
		a[k]=a[k]%10000;
	}

	for(int i=k;i>=1;i--){
		if(b[i]=='*'){
			a[i]=a[i]*a[i+1];
			a[i]%10000;
			a[i+1]=0;
		}
	}
	long long sum=0;
	for(int i=1;i<=k;i++){
	   sum+=a[i];
	   sum%=10000;
	}
	cout<<sum;
}

