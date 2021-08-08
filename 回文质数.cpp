#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
bool gcd(long long n){
	bool flag=true;
	for(long long i=2;i<=n-1;i++){
		if(n%i==0)flag=false;
	}
	return flag;
}
bool hui(long long n){
	int x=n;
	int su=0;
	while(x){
		su=su*10+x%10;
		x/=10;
	}
	if(su==x)return true;
	else return false;
}
int main(){
	long long a,b;
	cin>>a>>b;
	for(long long i=a;i<=b;i++){
		if(hui(i)&&gcd(i))cout<<i<<endl;
	}
}

