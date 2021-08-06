#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a;
	int max=INT_MIN;
    while(n--){
    	cin>>a;
    	if(a>max){
    		max=a;
		}
	}
	cout<<max;
}
