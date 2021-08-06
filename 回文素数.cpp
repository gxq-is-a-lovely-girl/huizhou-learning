#include<iostream>
#include<cstring> 
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
int is_pal(int a){
	int k[8];
	memset(k,0,sizeof(k));
	int i=1;
	while(a){
		k[i]=a%10;
		a/=10;
		if(a==0){
			break;
		}
		i++;
	}

	for(int j=1;j<=i;j++){
		if(k[i+1-j]!=k[j]){
			return 0;
			break;
		}
	}
	return 1;

}
int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=11;i<=n;i++){
              if(is_pal(i)&&is_prime(i)){
              sum++;
              }
        }
        cout<<sum;
}
