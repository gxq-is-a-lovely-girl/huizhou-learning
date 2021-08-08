#include<iostream>
using namespace std;
struct p{
	long long  time;
	long long  price;
	bool use=false;
}a[1000000000];
long long u=1;
int main(){
	long long n;
	long long k=0;
	long long a1,b,c;
	long long sum=0;
	cin>>n;
	while(n--){
		cin>>a1>>b>>c;
		if(!a1){
			k++;
			a[k].time=c;
			a[k].use=false;
			a[k].price=b;
			sum+=b;
		}else{
			bool flag=false;
			for(long long i=u;i<=k;i++){
				if(c-a[i].time<=45&&b<=a[i].price&&a[i].use==false){
					flag=true;
					a[i].use=true;
					break;
				}else if(c-a[i].time>45){
					u++;
				}
			}
			if(!flag)sum+=b;
		}
	}
	cout<<sum;
}
