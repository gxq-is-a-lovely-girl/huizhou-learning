#include<iostream>
using namespace std;
bool is_prime(int n){
    if(n==1){
        return 0;
    }
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
} 
int main(){
	int n;
	cin>>n;
	if(is_prime(n)){
		cout<<"Yes"<<endl;
	}else cout<<"No"<<endl;
}  
