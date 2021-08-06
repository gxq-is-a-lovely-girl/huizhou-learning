#include<iostream> 
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=2*n-1;j++){
			if(i==j||j==2*n-i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=2*n-1;j++){
			if(i==j||j==2*n-i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
