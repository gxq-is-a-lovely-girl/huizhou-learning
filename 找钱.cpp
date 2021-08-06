#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=1000000;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n/5;j++){
			for(int z=1;z<=n/12;z++){
				if(i+5*j+12*z==n)sum=min(sum,i+j+z);
			}
		}
	} 
	cout<<sum;
}
