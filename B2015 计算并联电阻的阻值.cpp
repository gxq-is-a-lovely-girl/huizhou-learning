#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
		double r1,r2;
		cin>>r1>>r2;
		double R=1/(1/r1+1/r2); 
		printf("%.2lf",R);
}

