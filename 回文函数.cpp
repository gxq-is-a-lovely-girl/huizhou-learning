#include<iostream>
using namespace std;
//完成回文数判定 is_pal函数 
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
	if(is_pal(n)){
		cout<<"Yes"<<endl;
	}else cout<<"No"<<endl;
} 
