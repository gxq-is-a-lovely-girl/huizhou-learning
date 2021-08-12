#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
double tmp(double a,double b,double c,double d){
	 return sqrt(pow(abs(a-c),2)+pow(abs(b-d),2));
}
int main(){
     double  a,b,c,d,e,f;
     cin>>a>>b>>c>>d>>e>>f;
    double b1=tmp(a,b,c,d);
    double b2=tmp(a,b,e,f);
	double b3=tmp(c,d,e,f);
	double p=(b1+b2+b3)/2;
	printf("%.2lf",sqrt(p*(p-b1)*(p-b2)*(p-b3)));
}

