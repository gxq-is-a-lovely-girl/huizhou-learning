#include<iostream>
using namespace std;
int main(){
	for(int i=6;i>=1;i--){
		for(int j=i;j>=1;j--){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
}
