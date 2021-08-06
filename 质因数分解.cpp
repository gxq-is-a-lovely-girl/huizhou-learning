#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int max=INT_MIN;
	for(int i=1;i<=n-1;i++){
		if(n%i==0&&i>=max){
			max=i;
		}
	}
	cout<<max;
}
