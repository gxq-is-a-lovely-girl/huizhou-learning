#include<iostream>
#include<cstring> 
using namespace std;
int usi(int a){
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
	for(int i=1;i<=n;i++){
		if(usi(i)){
			cout<<i<<endl;
		}
	} 
}
