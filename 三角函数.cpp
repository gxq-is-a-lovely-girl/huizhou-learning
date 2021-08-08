#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
long long  gcd(long long  n,long long m){
	int l=1;
	for(int i=2;i<=min(n,m);i++){
		if(n%i==0&&m%i==0){
			l=max(l,i);
		}
	}
	if(l==1){
		return 0;
	}else{
		return l;
	}
}
int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	long long min1=min(a,min(b,c));
	long long max1=max(a,max(b,c));
	long long k=gcd(max1,min1);
	if(k!=0){
		cout<<(min1/k)<<"/"<<max1/k;
	}else{
		cout<<min1<<"/"<<max1;
	}
}

