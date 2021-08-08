#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int x,n;
	cin>>x>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		if(x!=6&&x!=7){
			sum+=250;
		}
		if(x==7){
			x=1;
		}else{
			x++;
		}
	}
	cout<<sum;
}

