#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int la=a.length();
	int sum=0;
	for(int i=0;i<la;i++){
		if(48<=(int)a[i]&&(int)a[i]<=57){
			sum++;
		}
	}
cout<<sum;
}

