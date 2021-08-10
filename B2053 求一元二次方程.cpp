#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double d=pow(b,2)-4*a*c;
	if(d<0){
		cout<<"No answer!";
		return 0;
	} 
	double x1=(-b+sqrt(d))/(2*a);
	double x2=(-b-sqrt(d))/(2*a);
	if(x1==x2)printf("x1=x2=%.5lf",x1);
	else printf("x1=%.5lf;x2=%.5lf",min(x1,x2),max(x1,x2));
}

