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
	long long sum=0;
	while(n>0){
		sum+=n/5;
		n/=5;
	}
	cout<<sum; 
}

