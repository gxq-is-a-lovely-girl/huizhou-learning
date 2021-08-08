#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int min1=min(a,min(b,c));
	int mid;
	int max1=max(a,max(b,c));
	if(min1<a&&a<max1)mid=a; 
	if(min1<b&&b<max1)mid=b;
	if(min1<c&&c<max1)mid=c;  
	char k[10]={0};
	cin>>k;
	for(int i=0;i<strlen(k);i++){
		if(k[i]=='C')cout<<max1<<" ";
		if(k[i]=='B')cout<<mid<<" ";
		if(k[i]=='A')cout<<min1<<' ';
	}
}

