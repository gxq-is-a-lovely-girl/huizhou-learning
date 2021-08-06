#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[3];
    for(int i=0;i<3;i++){
    	cin>>a[i];
	}
	for(int i=2;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}
