#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	long long n;
	long long a,b,c,a1,b1,c1;
	cin>>a>>b>>c;
	a1=a,b1=b,c1=c;
	long long ans=1;
	while(b>0){
		if(b%2!=0){
			ans=(ans*a)%c;
		}
		a=(a*a)%c;
		b/=2;
	}
	cout<<a1<<'^'<<b1<<" mod "<<c1<<" "<<ans;
}

