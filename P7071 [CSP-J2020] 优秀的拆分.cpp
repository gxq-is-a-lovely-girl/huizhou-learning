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
		int i;
		if(n%2==1){
			cout<<-1;
			return 0;
		}
		while(n>0){
		i=1;
		while(1){
			if(pow(2,i+1)>n){
				break;
			}
			i++; 
		}
		n-=pow(2,i);
		cout<<(int)pow(2,i)<<" ";
		}
}

