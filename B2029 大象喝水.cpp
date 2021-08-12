#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	double pi=3.14;
	int  h,r;
	cin>>h>>r;
	double V=pi*r*r*h;
	cout<<ceil(20000/V);
}

