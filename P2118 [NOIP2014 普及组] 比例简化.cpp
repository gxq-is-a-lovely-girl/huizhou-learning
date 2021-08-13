#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<cmath>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}
int main(){
	double  a,b,l;
	double x,y;
	cin>>a>>b>>l;
	double p=a/b;
	double min1=10000000;
		for(int  i=1;i<=l;i++){
		for(int  j=1;j<=l;j++){
	    double k=i*1.0/j;
	    if(k>=p&&gcd(i,j)==1){
	    	double q=k-p;
	    	if(q<min1){
	    		min1=q;
	    		x=i;
	    		y=j;
			}
		}
	}
	}
	cout<<x<<' '<<y;
}

