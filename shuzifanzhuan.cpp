#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a=10,b=1;
	int n;
	cin>>n;
    while(1){
    	int k=n%a/b;
    	a=a*10;
    	b=b*10;
    	if(k==0){
    		break;
		}
		cout<<k<<" ";
	}
} 
