#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=1;
	int sum1=0;
	for(int i=1;i<=n;i++){
		sum=1;
		for(int j=1;j<=i;j++){
			sum*=j;
		}
		sum1+=sum;
	}
	cout<<sum1;
}
