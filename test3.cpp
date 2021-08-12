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
	if(90<=n){
		cout<<'A';
		return 0;
	}
	else if(80<=n&&n<90){
		cout<<'B';
		return 0;
	}else if(60<=n&&n<80){
		cout<<'C';
		return 0;
	}else if(n<60){
		cout<<'D';
	}
}

