#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a[100]={0};
	char b[100]={0};
	int max1=0,ans=0;
	while(n--){
		cin>>a>>b;
		bool flag=false;
		for(int i=0;i<strlen(b);i++){
			if(b[i]=='['){
				flag=true;
			}
		}
		if(flag){
			int k[10];
			int p=0;
			for(int i=0;i<strlen(b);i++){
				if('0'<=b[i]&&b[i]<='9'){
					k[p++]=b[i]-'0';
				}
			}
			int sum=1;
			for(int i=p-1;i>=0;i--){
				sum+=k[i]*10; 
			}
			if(strcmp(a,"char")==0){
		    while(ans%sum!=0)ans++;
			ans+=1*sum;
			max1=max(max1,1*sum);
		}
			if(strcmp(a,"int")==0){
			while(ans%(4*sum)!=0)ans++;
			ans+=4*sum;
			max1=max(max1,4*sum);
		}
			if(strcmp(a,"short")==0){
		while(ans%(2*sum)!=0)ans++;
		ans+=2*sum;
		max1=max(max1,2*sum);
		}
		if(strcmp(a,"double")==0){
			while(ans%(8*sum)!=0)ans++;
		ans+=8*sum;
		max1=max(max1,8*sum);
		}
		}else{
		if(strcmp(a,"char")==0){
		while(ans%1!=0)ans++;
		ans+=1;
		max1=max(max1,1);
		}
		if(strcmp(a,"int")==0){
			while(ans%4!=0)ans++;
		ans+=4;
		max1=max(max1,4);
		}
		if(strcmp(a,"short")==0){
		while(ans%2!=0)ans++;
		ans+=2;
		max1=max(max1,2);
		}
		if(strcmp(a,"double")==0){
			while(ans%8!=0)ans++;
		ans+=8;
		max1=max(max1,8);
		}
		}
	}
	while(ans%max1!=0)ans++;
	cout<<ans;
}
