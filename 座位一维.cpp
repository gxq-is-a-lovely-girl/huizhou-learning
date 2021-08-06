#include<iostream>
using namespace std;
int main(){
	int n;
	int a[101]={0},b[6000]={0},num=1,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]*10;
		sum+=a[i];
	}
	cout<<sum;
	int usi=sum;
	while(sum!=0){
	for(int i=1;i<=n;i++){
		if(a[i]){
			b[num++]=i;
			sum--;
			a[i]--; 
		}
	}	
	}
		int m=0;
	for(int i=1;i<=n;i++){
		cout<<'#'<<i<<endl;
		for(int j=1;j<=usi;j++){
			if(b[j]==i){
				if(b[j-1]!=b[j]){
				cout<<j;
				m++;
			}else{
				cout<<j+1;
				m++;
			}
				if(m%10==0){
					cout<<endl;
					m=0;
				}else{
					cout<<" ";
				}
			}
		}
	}
}
