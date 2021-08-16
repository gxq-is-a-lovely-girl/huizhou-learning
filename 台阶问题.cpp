#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
		long long n;
		long long f[51];
		cin>>n;
		f[1]=1;
		f[2]=2;
		if(n<3){
			cout<<1;
		}else{
		for(int i=3;i<=n;i++){
			f[i]=f[i-1]+f[i-2];
		}	
		cout<<f[n];
		}
		
}

