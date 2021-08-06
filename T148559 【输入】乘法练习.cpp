#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[10];
	int b[10];
	for(int i=1;i<=9;i++){
		cin>>a[i];
		b[i]=a[i]-'0';
	}
	int x,y,z;
	x=b[1]*100+b[2]*10+b[3];
	y=b[4]*100+b[5]*10+b[6];
	z=b[7]*100+b[8]*10+b[9];
	long long sum=1;
	sum*=x*y*z;
	cout<<sum;
    return 0;
} 
