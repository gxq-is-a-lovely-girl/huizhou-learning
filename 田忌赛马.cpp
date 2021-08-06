#include<iostream>
using namespace std;
int main(){
	int a[4];
	int b[4];
	for(int i=1;i<=3;i++){
		cin>>a[i];
	}
	for(int i=1;i<=3;i++){
		cin>>b[i];
	}
	int i=1;
	while(1){
		if(a[i]<b[i]){
			cout<<"WIN";
			return 0;
		}
		if(i==3){
		break;	
		}
		i++; 
	}
	cout<<"LOSE";
} 
