#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int n,m;
bool hui(int x){
	int k=x,ans=0;
	while(k){
		ans=ans*10+k%10;
		k/=10;
	}
    if(ans!=x){
	return false;
	} 
	return true;
}
bool b[100000001];
void is_prime(){
	memset(b,true,sizeof(b));
	b[1]=0;
	for(int i=2;i<=sqrt(m);i++){
		if(b[i]){
			for(int j=2;j<=m/i;j++){
				b[i*j]=false;
			}
		}
	}
} 
int main(){
	cin>>n>>m;
	if (m>=10000000)
        m=9999999;
	is_prime();
	if(n%2==0){
		n+=1;
	}
	for(int i=n;i<=m;i+=2){
		if(b[i]&&hui(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}

