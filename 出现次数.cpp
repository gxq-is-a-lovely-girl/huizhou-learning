#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a;
	int sum=0;
	while(n--){
		cin>>a;
		if(a==m){
			sum++;
		}
	}
	cout<<sum;
}
