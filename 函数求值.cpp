#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double k=max(a,max(b,c))/(max(a+b,max(b,c))*max(a,max(b,b+c)));
	printf("%.2lf",k);
} 
