#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a;
	int sum=0;
	while(m--){
		cin>>a;
		if(a<n){
			n-=a;
		}else{
			sum++;
		}
	}
	cout<<sum;
} 
