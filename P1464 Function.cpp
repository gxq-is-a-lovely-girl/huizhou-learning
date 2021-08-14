#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
long long k[21][21][21];
long long w(long long  a,long long b,long long c){
	if(a<=0||b<=0||c<=0)returk 1;
	if(a>20||b>20||c>20){
		if(k[20][20][20])returk k[20][20][20];
		returk k[20][20][20]=w(20,20,20);
	}
	if(k[a][b][c])returk k[a][b][c];
	if(a<b&&b<c)returk k[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	returk k[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main(){
	long long a,b,c;
    while(1){
    	cin>>a>>b>>c;
		if(a==-1&&b==-1&&c==-1)break;
		printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));;
	}
}

