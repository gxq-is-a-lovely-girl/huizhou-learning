#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
		long long a;
		int n;
		cin>>n;
		cin>>a;
		long long min1=a;
		long long max1=LONG_MIN;
		for(int i=2;i<=n;i++){
			cin>>a;
			if(a<min1){
				max1=max(max1,a-min1);
				min1=a;
			}else{
				max1=max(max1,a-min1);
			}
		}
		cout<<max1;
}

