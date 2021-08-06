#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double a[4];
	double max=0;
	double min=100;
	int k,l;
	for(int i=0;i<4;i++){
		cin>>a[i];
		if(a[i]>=max){
			max=a[i];
			k=i;
		}
	if(a[i]<=min){
		min=a[i];
		l=i;
	}
	}
	double sum=0;
	for(int i=0;i<4;i++){
		if(i!=l&&i!=k){
			sum+=a[i];
		}
	}
	printf("%.2lf",sum/2);
}

