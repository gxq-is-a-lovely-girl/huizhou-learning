#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int a[n+1]={0};
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=q;i++){
		int o; 
		cin>>o;
		char k[20];
		cin>>k;
		int p=1,sum=0;
		for(int j=strlen(k)-1;j>=0;j--){
			int u=k[j]-'0';
			u*=p;
			sum+=u;
			p*=10;
		}
		p=pow(10,o);
		bool flag=false;
		for(int j=1;j<=n;j++){
			if(a[j]%p==sum){
				cout<<a[j]<<endl;
				flag=true;
				break;
			}
		}
		if(!flag){
			cout<<-1<<endl;
		}
	}
}

