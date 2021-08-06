#include<iostream>
using namespace std;
int main(){
	double a=20000;
	int  r,h;
	double pi=3.14159;
	cin>>h>>r;
	int sum=0;
	double k=r*r*h*pi;
	while(a>=0){
		a-=k;
		sum++;
	}
	cout<<sum;
	return 0;
} 
