#include<iostream>
using namespace std;
int l(int a){
	int sum1=0;
	while(a){
		if(a%10==1){
			sum1++;
		}
		a/=10;
	}
	return sum1;
}
int main(){
	int n;
	int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=l(i);
	}
	cout<<sum;
}
