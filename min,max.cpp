#include<iostream>
using namespace std;
int  max_value(int x,int y){
	return max(x,y);
} 
int  min_value(int n,int m){
	return min(n,m);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"max="<<max_value(a,b)<<endl;
	cout<<"min="<<min_value(a,b)<<endl; 
} 
