#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;

int main(){
		long long n;
		cin>>n;
		long long a[100]={0,1,1};
		if(n==1||n==2){
			cout<<1;
			return 0;
		}else{
		
		for(int i=3;i<=n;i++){
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[n];
		}
}

