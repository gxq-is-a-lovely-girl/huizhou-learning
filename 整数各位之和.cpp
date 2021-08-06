#include<iostream>
using namespace std;
int l(int a){
	int sum1=0;
	  while(a){
      	sum1+=a%10;
      	a/=10;
	  }
	  return sum1;
} 
int main(){
	int a,b;
	 cin>>a>>b;
	 int sum=0;
	 for(int i=a;i<=b;i++){
	 	sum+=l(i);
	 }
	 cout<<sum;
}
