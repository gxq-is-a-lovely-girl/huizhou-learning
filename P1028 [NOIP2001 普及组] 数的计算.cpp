#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int f[1000];
int main(){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i/2;j++){
				f[i]+=f[j];
			}
			f[i]+=1;
		}
		cout<<f[n];
}

