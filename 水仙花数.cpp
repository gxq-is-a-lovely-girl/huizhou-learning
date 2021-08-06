#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int a;
	 cin>>a;
	 int ge=a%10;
	 int shi=a/10%10;
	 int bai=a/100;	
     if(pow(ge,3)+pow(shi,3)+pow(bai,3)==a){
     	cout<<"YES";
	 }else{
	 cout<<"NO";
	 }
}
