#include<iostream>
#include<cstdio>
#define gxq float
using namespace std;
int main(){
	gxq a,b;
	cin>>a>>b;
	gxq k=1.9;
	b/=10;
	a+=b;
	int sum=0;
	while(a>=k){
		a-=k;
		sum++;
	}
	cout<<sum;
	return 0;
}

