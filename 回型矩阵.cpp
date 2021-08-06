#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
     int n;
     cin>>n;
     int num=1;
     int a[n+1][n+1];
	 int q=1,p=n-1;
    while(num<n*n){
    	for(int i=q;i<=p;i++){
    		a[q][i]=num++;
		}
		for(int i=q;i<=p;i++){
			a[i][p+1]=num++;
		}
		for(int i=p+1;i>=q+1;i--){
			a[p+1][i]=num++;
		}
		for(int i=p+1;i>=q+1;i--){
			a[i][q]=num++;
		}
		q++;
		p--;
	}
	if(n%2==1){
		int k=n/2+1;
		a[k][k]=n*n;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

