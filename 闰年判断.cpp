#include<iostream>
using namespace std;
//完成闰年判定 is_leap 函数 
bool is_leap(int n){
	if(n%4==0&&n%100!=0||n%400==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	if(is_leap(n)){
		cout<<"Y"<<endl;
	}else cout<<"N"<<endl;
} 
