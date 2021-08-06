#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int n1=n;
	int a;
	double sum=0;
	while(n1--){
		cin>>a;
		if(a%70!=0){
			sum+=a/70+1;
		}else{
			sum+=a/70;
	}
	}


	printf("%.1lf",sum/10);

} 

