#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1]={0};
	int max=0,flag=n+1;
	for(int i=1;i<=n;i++){
	  cin>>a[i];
	  if(max<=a[i]||max==a[i]&&i<flag){
	  	flag=i;
	  	max=a[i];
	  }
	}

	swap(a[flag],a[1]);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}
}
