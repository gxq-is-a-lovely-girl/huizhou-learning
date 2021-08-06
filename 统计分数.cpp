#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int max1[m+1],min1[m+1];
	memset(max1,-1,sizeof(max1));
	memset(min1,101,sizeof(min1));
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[j][i]>max1[i]){
				max1[i]=a[j][i];
			}
			if(a[j][i]<min1[i]) {
				min1[i]=a[j][i];
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<max1[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<=m;i++){
		cout<<min1[i]<<" ";
	}
	
} 
