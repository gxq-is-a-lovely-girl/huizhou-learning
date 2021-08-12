#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
     long long  a,b,c,d;
     cin>>a>>b>>c>>d;
     printf("%.3lf",sqrt(pow(abs(a-c),2)+pow(abs(b-d),2)));
}

